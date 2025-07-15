#include <stdio.h>
#include <iostream>
#include <string>
#include "Inputs.hpp"
#include "Character.hpp"

int main() {
	
	InitWindow(800, 800, "Hello!");
	SetTargetFPS(60);

	int key = Inputs::direction;
	Vector2 pp = Inputs::_movement;

	Character girl("img/gungirl.png");

	while (!WindowShouldClose()) {
		
		BeginDrawing();
		ClearBackground(WHITE);

		Inputs::updateMovement();
		girl.Draw();
		girl.Update();

		if (key != Inputs::direction) {
			std::cout << Inputs::direction << '\n';
			key = Inputs::direction;
		}

		EndDrawing();
	}

	CloseWindow();
}