import java.io.IOException;
import java.io.ObjectInputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class Server {
    public static void main(String[] args) {
        try {
            // Create a server socket on a specific port (e.g., 12345)
            ServerSocket serverSocket = new ServerSocket(9999);
            System.out.println("Server is waiting for client...");

            // Accept a client connection
            Socket clientSocket = serverSocket.accept();
            System.out.println("Client connected.");

            // Create an ObjectInputStream to read objects from the client
            ObjectInputStream objectInputStream = new ObjectInputStream(clientSocket.getInputStream());

            // Read an integer from the client
            int receivedNumber = objectInputStream.readInt();
            System.out.println("Received number from client: " + receivedNumber);

            // Close the streams and sockets
            objectInputStream.close();
            clientSocket.close();
            serverSocket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}