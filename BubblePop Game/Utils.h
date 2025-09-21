#ifndef UTILS_H
#define UTILS_H
#include <cmath> 
#include <cstdlib>

const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 800;


double euclideanDistance(double x1, double y1, double x2, double y2) {
	double temp = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	return sqrt(temp);
}


#endif