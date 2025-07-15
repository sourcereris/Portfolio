#pragma once
#include "raylib.h"

using namespace std;



class Dot{
    public:
    Dot(): x(0), y(0), distFromCent(0), degreeInRad(0), color(WHITE){}
    Dot(float cx, float cy){}

    float x, y;
    Color color;
    void move();

    private:

    float distFromCent;
    float degreeInRad;

    

    float clampFunct(float base, float multiplier, float fMultiplier);
    Color getRandColor(float dist, float maxDist);
};