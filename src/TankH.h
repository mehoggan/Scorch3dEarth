#ifndef TANK_H_H
#define TANK_H_H

#include <windows.h>
#include "glew.h"
#include "glut.h"

class TankH : public Tank{
public:
	TankH();
	TankH(GLfloat x, GLfloat y, GLfloat z);
	~TankH();

	int getBaseHP();
	int getBasePower();
	int getBaseArmor();
	int getBaseSpeed();
	const char* getName();
};

#endif