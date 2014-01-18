#ifndef NORMAL
#define NORMAL

#include <windows.h>
#include <stdio.h>
#include "glew.h"
#include "glut.h"
#include <math.h>

class Normal{
	public:
		Normal();
		Normal(GLfloat x, GLfloat y, GLfloat z);
		~Normal();
		GLfloat compoX;
		GLfloat compoY;
		GLfloat compoZ;
};
#endif // NORMAL