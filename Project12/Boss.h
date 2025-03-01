#ifndef BOSS_H
#define BOSS_H

#include <iostream>


struct Boss {
	int x, y;   // Position
	int health; // Health points

	Boss(int startX, int startY, int startHealth) {
		x = startX;
		y = startY;
		health = startHealth;
		std::cout << "Hellowww";
	}

};

extern Boss boss;

void moveBossLeft();
void moveBossRight();

#endif // BOSS_H