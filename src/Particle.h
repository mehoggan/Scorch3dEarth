#include <windows.h>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "glew.h"
#include "glut.h"
#include "SpecialEffect.h"

#ifndef PARTICLE_H
#define PARTICLE_H

class Particle {
public:
	Particle();
	virtual bool update()=0;
	void draw();
	

protected:
	GLfloat size,x,y,z,speed,dir[3],red,green,blue;
	int activeFrames,currentFrame;
};

#endif