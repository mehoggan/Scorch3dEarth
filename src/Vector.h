#ifndef VECTOR_H
#define VECTOR_H

#include <windows.h>
#include <stdio.h>
#include <math.h>
#include "glew.h"
#include "glut.h"

class Vector {
	public:
		Vector();
		Vector(GLfloat compoX, GLfloat compoY, GLfloat compoZ);
		~Vector();
		GLfloat compoX;
		GLfloat compoY;
		GLfloat compoZ;
};

#endif /*	VECTOR_H	*/