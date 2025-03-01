#include "Hero.h"

// Define the global hero variable
Hero hero(100, 200, 100); // Initial position (50, 50) and health 100

void moveHeroLeft() {
	hero.x -= 10; // Move hero to the right
	std::cout << "Hero is moving to position: (" << hero.x << ", " << hero.y << ")" << std::endl;
}

void moveHeroRight() {
	hero.x += 10; // Move hero to the right
	std::cout << "Hero is moving to position: (" << hero.x << ", " << hero.y << ")" << std::endl;
}