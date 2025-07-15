#include "Character.hpp"
#include <iostream>
Character::Character(const std::string imgSrc) : spritePath(imgSrc){
    girlImage = LoadImage(imgSrc.c_str());
    ImageResize(&girlImage, 1000, 64);
    girlTexture = LoadTextureFromImage(girlImage);
    UnloadImage(girlImage);
    position = {375, 368};
    imagePart = { 0, 0, 50, 64 };
}

void Character::Draw() {
    DrawTextureRec(girlTexture, imagePart, position, WHITE);
}

void Character::Update() {
    Inputs::updateMovement();
    adjustSpritePosition();
    animateSprite();
    move();
}

void Character::move() {
    
    float speed = 1;
    if(Inputs::direction % 2 == 0){
        speed = Vector2Length(Inputs::_movement)/2;
    }

    std::cout << speed << '\n';

    position.x += Inputs::_movement.x * speed*3;
    position.y += Inputs::_movement.y * speed*3;
}

void Character::adjustSpritePosition()
{
    bool doesRotationChanged = rotated;
    if (Inputs::direction != 0) {
        if (Inputs::direction == 1) {
            x_ofImage = 800;
            rotated = false;
        }
        else if (Inputs::direction == 2) {
            x_ofImage = 200;
            rotated = false;
        }
        else if (Inputs::direction == 3) {
            x_ofImage = 0;
            rotated = false;
        }
        else if (Inputs::direction == 4) {
            x_ofImage = 400;
            rotated = false;
        }
        else if (Inputs::direction == 5) {
            x_ofImage = 600;
            rotated = false;
        }
        else if (Inputs::direction == 6) {
            x_ofImage = 400;
            rotated = true;
        }
        else if (Inputs::direction == 7) {
            x_ofImage = 800;
            rotated = true;
        }
        else if (Inputs::direction == 8) {
            x_ofImage = 600;
            rotated = true;
        }
    }

    if (doesRotationChanged != rotated) {
        horizontalFlip();
    }

}

void Character::horizontalFlip() {

    Image img = LoadImage(spritePath.c_str());
    ImageResize(&img, 1000, 64);
    if (rotated)ImageFlipHorizontal(&img);
    girlTexture = LoadTextureFromImage(img);
    UnloadImage(img);
}

void Character::animateSprite() {
    static int counter = 0;
    ++counter;
    static int frame = 0;

    if (counter % 10 == 0) {
        ++frame;
    }
    if (frame == 4) frame = 0;

    imagePart = { x_ofImage + frame     * SPRITEWIDTH, 0,
                  SPRITEWIDTH, SPRITEHEIGHT};
}

Character::~Character() {
    UnloadTexture(girlTexture);
}