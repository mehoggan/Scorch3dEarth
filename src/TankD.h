#ifndef TANK_D_H
#define TANK_D_H

#include <windows.h>
#include "glew.h"
#include "glut.h"

class TankD : public Tank{
public:
	TankD();
	TankD(GLfloat x, GLfloat y, GLfloat z);
	~TankD();

	int getBaseHP();
	int getBasePower();
	int getBaseArmor();
	int getBaseSpeed();
	const char* getName();
	void buildList();
};

#endif