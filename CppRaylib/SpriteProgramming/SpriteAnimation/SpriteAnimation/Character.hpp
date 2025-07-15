#pragma once
#include <raylib.h>
#include <raymath.h>
#include <string>
#include "Inputs.hpp"

inline float SPRITEWIDTH = 50;
inline float SPRITEHEIGHT = 64;
inline float x_ofImage = 0;
inline bool  rotated = false;

class Character
{
private:
	Image girlImage;
	Texture2D girlTexture;
	Rectangle imagePart;
	Vector2 position;
public:
	
	Character(const std::string);
	~Character();
	void Draw();
	void Update();
	void adjustSpritePosition();
	void animateSprite();
	void horizontalFlip();
	void move();
	std::string spritePath;
};

