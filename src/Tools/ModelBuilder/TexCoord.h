#ifndef TEX_COORD_H
#define TEX_COORD_H

#include <windows.h>
#include <stdio.h>
#include "glew.h"
#include "glut.h"

class TexCoord{
	public:
		TexCoord();
		TexCoord(GLfloat s, GLfloat t);
		~TexCoord();
		GLfloat texcoordS;
		GLfloat texcoordT;
};
#endif // TEX_COORD_H