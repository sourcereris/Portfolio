#include "Application.h"


    int screenWidth, screenHeight;
    int startX, startY;
    int count;

    void HandleInput();
    
    void run(){
        InitWindow(screenWidth, screenHeight, "Graph");
        SetTargetFPS(30);

        while(!WindowShouldClose()){
            HandleInput();

        }
    }

    void HandleInput(){
        if(GetMouseWheelMove() > 0){
            //scale *= 1.1
        }else if(GetMouseWheelMove() < 0){
            //scale *= 0.9
        }

    }

    void Update(){

    }

    void render() {

        BeginDrawing();
        ClearBackground(LIGHTGRAY);

        DrawLine(startX, 0, startX, screenHeight, BLACK);
        DrawLine(0, startY, screenWidth, startY, BLACK);

        EndDrawing();
    }
