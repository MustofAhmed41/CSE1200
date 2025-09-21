#include "iGraphics.h"
#include "Utils.h"
#include "Balloon.h"
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

const int TOTAL_BALLOON = 5;
Balloon B[TOTAL_BALLOON];

int hit = 0;
int miss = 0;
char scoreText[50];


void iDraw()
{
	iClear();
	iSetColor(255, 255, 255);
	sprintf_s(scoreText, "HIT : %d", hit);	
	iText(50, 500, scoreText, GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf_s(scoreText, "MISS : %d", miss);
	iText(50, 550, scoreText, GLUT_BITMAP_TIMES_ROMAN_24);

	for (int i = 0; i < 5; i++){
		iShowImage(B[i].pos_x, B[i].pos_y, BALLOON_WIDTH, BALLOON_HEIGHT, B[i].image);
	}
}


/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		for (int i = 0; i < 5; i++){
			if (B[i].isHit(mx, my)){
				hit++;
			}
				
		}
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
	}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}

void change_y(){
	for (int i = 0; i < 5; i++){
		bool isOutOfBound = B[i].moveUp();
		if (isOutOfBound){
			miss++;
		}
	}
}

void initializeBallon(){
	for (int i = 0; i < 5; i++) {
		char imageSource[100];
		sprintf_s(imageSource, "balloon%d.png", i + 1);
		B[i].image = iLoadImage(imageSource);
	}
}

int main()
{
	///srand((unsigned)time(NULL));
	iSetTimer(40, change_y);
	iInitialize(SCREEN_WIDTH, SCREEN_HEIGHT, "Project Title");
	initializeBallon();
	///updated see the documentations
	iStart();
	return 0;
}