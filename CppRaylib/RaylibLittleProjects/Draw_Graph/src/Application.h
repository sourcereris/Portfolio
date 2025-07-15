#pragma once
#include <raylib.h>

class Application{

private:
    int screenWidth, screenHeight;
    int startX, startY;
    int count;
public:
    Application(int screenWidth, int screenHeight) : screenWidth(screenWidth), screenHeight(screenHeight),
                                                    startX(50), startY(screenHeight - 50), count(0){};
    void run();
private: 
    void HandleInput();
    void update();
    void render() const;
};