import java.io.IOException;
import java.io.ObjectOutputStream;
import java.net.Socket;

public class Client {
    public static void main(String[] args) {
        try {
            // Create a socket and connect to the server at a specific IP address and port (e.g., localhost:12345)
            Socket socket = new Socket("localhost", 9999);

            // Create an ObjectOutputStream to send objects to the server
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(socket.getOutputStream());

            // Send an integer to the server
            int numberToSend = 42;
            System.out.println("Sending number to server: " + numberToSend);
            objectOutputStream.writeInt(numberToSend);
            objectOutputStream.flush();

            // Close the stream and socket
            objectOutputStream.close();
            socket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}