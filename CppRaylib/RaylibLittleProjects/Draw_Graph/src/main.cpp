#include <raylib.h>
#include <cmath>
#include <vector>

constexpr int screenWidth = 800;
constexpr int screenHeight = 600;

int startX = 50;
int startY = screenHeight - 50;

float count = 0;

float scale = 1;

int main() 
{
    //const Color darkGreen = {20, 160, 133, 255};

    std::vector<std::vector<int>> numbers;
    std::vector<std::vector<double>> numbers1;
    numbers.push_back({0, 0});
    numbers1.push_back({0, 0});


    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    {   
        
        if (GetMouseWheelMove() > 0) {
            scale *= 1.1;
        }
        else if (GetMouseWheelMove() < 0) {
            scale *= 0.9;
        }

        BeginDrawing();
            ClearBackground(LIGHTGRAY);
        DrawLine(startX, 0, startX, screenHeight, BLACK);
        DrawLine(0, startY, screenWidth, startY, BLACK);

        if(count * scale <= screenWidth){
            numbers.push_back({(int)(count ), (int) (sqrt(count))});
            numbers1.push_back({(count ), (sqrt(count))});
            count++;
        }

        for (int i = 0; i < (int)numbers.size()-1; i++) {
            DrawLine(startX + numbers[i][0] * scale, startY - numbers[i][1] * scale, startX + numbers[i+1][0] * scale, startY - numbers[i+1][1] * scale, RED);
            DrawLine(startX + numbers1[i][0] * scale, startY - numbers1[i][1] * scale, startX + numbers1[i+1][0] * scale, startY - numbers1[i+1][1] * scale, BLUE);
        }

        
        EndDrawing();
    }
    
    CloseWindow();
}