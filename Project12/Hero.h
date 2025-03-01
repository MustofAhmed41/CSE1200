#ifndef HERO_H
#define HERO_H

#include <iostream>

// Structure for Hero
struct Hero {
	int x, y;   // Position
	int health; // Health points

	Hero(int startX, int startY, int startHealth) {
		x = startX;
		y = startY;
		health = startHealth;
		std::cout << "Hellowww";
	}
};

// Global variable for Hero (defined in Hero.cpp)
extern Hero hero;

void moveHeroLeft();
void moveHeroRight();

#endif // HERO_H
