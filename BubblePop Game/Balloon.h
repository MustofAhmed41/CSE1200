#ifndef BALLOON_H
#define BALLOON_H
#include "Utils.h"

const int BALLOON_HEIGHT = 100;
const int BALLOON_WIDTH = 100;

struct Balloon{
	int pos_y;
	int pos_x;
	int image;
	int speed;

	Balloon(){
		resetBall();
	}

	void resetBall(){
		this->pos_y = 0;
		this->pos_x = (rand() % (SCREEN_WIDTH - 100));
		this->speed = rand() % 25 + 5;
	}

	bool moveUp(){
		this->pos_y += this->speed;
		if (this->pos_y >= SCREEN_HEIGHT){
			this->resetBall();
			return true;
		}

		return false;
	
	}

	bool isHit(int mx, int my){
		double distance = euclideanDistance(this->pos_x + 50, this->pos_y + 50, mx, my);
		if (distance <= 50){
			this->resetBall();
			return true;
		}
		return false;
	}



};



#endif