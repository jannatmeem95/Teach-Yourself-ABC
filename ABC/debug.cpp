# include "iGraphics.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int x = 300, y = 300, r = 15;

int i, j, k, l, m;

char * colorErPic[10][3] =
{
	{ "33.bmp", "blue.bmp", "owl.bmp" },
	{ "apple.bmp", "tomato.bmp", "strawberry.bmp" },
	{ "aligator.bmp", "okra.bmp", "vine.bmp" },
	{ "banana.bmp", "starfruit.bmp", "telephnoe.bmp" },
	{ "51.bmp", "octopus.bmp", "pink.bmp" },
	{ "21.bmp", "purple.bmp", "purple1.bmp" },
	{ "carrot.bmp", "orange.bmp", "orange1.bmp" },
	{ "almond.bmp", "brown.bmp", "brownie.bmp" },
	{ "paper.bmp", "teeth.bmp", "paper.bmp" },
	{ "shirt.bmp", "teeth.bmp", "shirt.bmp" }
};





/*
function iDraw() is called again and again by the system.

*/

void picChanger()
{
	if(j<2) j++;
	else  if (j == 2)
	{
		if(i<9) i++; 
		else i = 0;
		j = 0;
	}
	

}
void iDraw()
{
	//place your drawing codes here
	iClear();
	iSetColor(0,0, 255);
	iFilledRectangle(0, 0, 1300, 700);
	/*for (i = 0, l = 100; i <3; i++, l += 300)
	{
		for (j = 80, k = 0; k < 10; k++, j += 30)
		{
			iShowBMP(l, j, colorErPic[i][k]);
		}
	}*/
	iShowBMP(100, 100, colorErPic[i][j]);
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	.
		//printf("x = %d, y= %d\n",mx,my);
		x += 5;
		y += 5;

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
		x -= 5;
		y -= 5;

	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		exit(0);
	}
	if(key == 'p') iPauseTimer(0);
	if(key == 'r') iResumeTimer(0) ;
	//place your codes for other keys here
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

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}


int main()
{
	//place your own initialization codes here. 	
	
	iSetTimer(1000, picChanger);
	iInitialize(1200, 700, "demooo");
	return 0;
}