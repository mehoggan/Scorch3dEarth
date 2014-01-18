#ifndef VERTEX
#define VERTEX

#include <windows.h>
#include <stdio.h>
#include <math.h>
#include "glew.h"
#include "glut.h"

class Vertex{
	public:
		Vertex();
		Vertex(GLfloat x, GLfloat y, GLfloat z);
		~Vertex();
		GLfloat coordX;
		GLfloat coordY;
		GLfloat coordZ;
};
#endif // Vertex