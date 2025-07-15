#include "Dot.h"
#include "raylib.h"
#include "getColor.h"

using namespace std;

Dot::Dot(float cx, float cy): x(cx), y(cy){
    distFromCent = (sqrt(GetScreenHeight/2-y + (GetScreenWidth/2-x)));
    degreeInRad = atan2(y - GetScreenHeight() / 2, x - GetScreenWidth() / 2);
    color = getRandColor(distFromCent, 300); // Example: using a max distance of 300 for color scaling
}

void Dot::move(){
        
        distFromCent = clampFunct(distFromCent, -0.1, -0.5);
        degreeInRad = clampFunct(degreeInRad, 0.01, 0.01);
        color = getColor(distFromCent, 300);

        x = GetScreenWidth()/2 + (distFromCent * cos(degreeInRad));
        y = GetScreenHeight()/2 + (distFromCent * sin(degreeInRad));
}

float Dot::clampFunct(float base, float multiplier, float fMultiplier) {
    float distance = Clamp(distFromCent, 0, 400.0f);  // Clamp the distance to max 400
    float factor = distance / 400.0f;                 // Calculate factor based on distance ratio
    return base += multiplier + fMultiplier * factor;
}
