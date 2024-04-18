#ifndef DEFS_H
#define DEFS_H

#include "CMUgraphicsLib\CMUgraphics.h"

//This file contains some global constants and definitions to be used in the project.
enum ActionType //The actions supported (you can add more if needed)
{
	
DRAW_RECT,
DRAW_CIRC,
DRAW_LINE, 
DRAW_HEXA,
DRAW_TRI,
DRAW_SQR,
EXIT,   
EMPTY,
STATUS,
SHAPE,
DRAWING_AREA,
TO_DRAW,
TO_PLAY,
ACTPICFILL,
DRAW_COUNT,
CLR,
FILL,		//A click on the status bar

	///TODO: Add the other action types of the two modes
};

struct Point	//To be used for figures points
{ int x,y; };

struct GfxInfo	//Graphical info of each figure (you may add more members)
{
	color DrawClr;	//Draw color of the figure
	color FillClr;	//Fill color of the figure
	bool isFilled;	//Figure Filled or not
	int BorderWdth;	//Width of figure borders

};

#endif
