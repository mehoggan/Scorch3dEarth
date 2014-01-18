#ifndef TANK_G_H
#define TANK_G_H

#include <windows.h>
#include "glew.h"
#include "glut.h"

class TankG : public Tank{
public:
	TankG();
	TankG(GLfloat x, GLfloat y, GLfloat z);
	~TankG();

	int getBaseHP();
	int getBasePower();
	int getBaseArmor();
	int getBaseSpeed();
	const char* getName();
	void buildList();
	virtual void drawTankHitBox();
	virtual void updateHitBox();
};

#endif