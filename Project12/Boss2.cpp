#include "Boss.h"
#include <iostream>

Boss boss(300, 200, 100); // Initial position (100, 200) and health 100

// Function to move the boss
void moveBossLeft() {
	boss.x -= 10;
	std::cout << "Boss moved to: (" << boss.x << ", " << boss.y << ")" << std::endl;
}


void moveBossRight() {
	boss.x += 10;
	std::cout << "Boss moved to: (" << boss.x << ", " << boss.y << ")" << std::endl;
}




