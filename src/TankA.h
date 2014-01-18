#ifndef TANK_A_H
#define TANK_A_H

#include <windows.h>
#include "glew.h"
#include "glut.h"

class TankA : public Tank{
public:
	TankA();
	TankA(GLfloat x, GLfloat y, GLfloat z);
	~TankA();

	int getBaseHP();
	int getBasePower();
	int getBaseArmor();
	int getBaseSpeed();
	const char* getName();
	virtual void drawTankHitBox();
	virtual void updateHitBox();
};

#endif