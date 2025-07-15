#pragma once
#include <raylib.h>
#include <iostream>

/* --------------------- movement logic ---------------------------------------
updateMovement() - top function that begins movement logic
movementKeys()   - initializes whic keys been pressd
updateMovementVector(int key1, int key2) - updates vector based on keys pressed
-----------------------------------------------------------------------------*/

//-- directions ------------
//       1
//    8  |  2
// 7 ___\|/___ 3 
//      /|\
//    6  |  4
//       5
//--------------------------



class Inputs {

public:
	inline static Vector2 _movement;
	inline static int direction;

	static void updateMovement() {
		updateMovementVector();
		updateDirection();
	}
private:
	static void updateMovementVector() {
		_movement = { 0, 0 };
		if (IsKeyDown(KEY_W)) _movement.y -= 1;
		if (IsKeyDown(KEY_S)) _movement.y += 1;
		if (IsKeyDown(KEY_A)) _movement.x -= 1;
		if (IsKeyDown(KEY_D)) _movement.x += 1;
	}
	static void updateDirection() {
		
		direction = 0;
		static int key1 = 0;
		static int key2 = 0;

		if (key1 == 0) key1 = GetKeyPressed();
		else if (IsKeyReleased(key1)) key1 = 0;

		if (key1 != 0 && key2 == 0) key2 = GetKeyPressed();
		else if (key1 != 0 && key2 != 0 && IsKeyReleased(key2)) key2 = 0;

		if (IsKeyDown(key2) && !IsKeyDown(key1)) {
			key1 = key2;
			key2 = 0;
		}
		if (!IsKeyDown(key1)) key1 = key2 = 0; //key1 main key2 support;

		if (key1 == 0) return;
		else if(key2 != 0){
			if (key1 == KEY_W && key2 == KEY_D || 
				key2 == KEY_W && key1 == KEY_D) direction = 2;
			if (key1 == KEY_W && key2 == KEY_A ||
				key2 == KEY_W && key1 == KEY_A) direction = 8;
			if (key1 == KEY_S && key2 == KEY_D ||
				key2 == KEY_S && key1 == KEY_D) direction = 4;
			if (key1 == KEY_A && key2 == KEY_S ||
				key2 == KEY_A && key1 == KEY_S) direction = 6;
		}
		else {
			if (key1 == KEY_W) direction = 1;
			if (key1 == KEY_D) direction = 3;
			if (key1 == KEY_S) direction = 5;
			if (key1 == KEY_A) direction = 7;
		}

	}
};