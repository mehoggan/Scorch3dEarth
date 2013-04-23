#ifndef TANK_B_H
#define TANK_B_H

#include <windows.h>
#include "glew.h"
#include "glut.h"

class TankB : public Tank{
public:
	TankB();
	TankB(GLfloat x, GLfloat y, GLfloat z);
	~TankB();

	int getBaseHP();
	int getBasePower();
	int getBaseArmor();
	int getBaseSpeed();
	const char* getName();
	void buildList();
};

#endif