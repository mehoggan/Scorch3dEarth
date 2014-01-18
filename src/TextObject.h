#ifndef TEXT_OBJECT_H
#define TEXT_OBJECT_H

#include <windows.h>
#include <stdio.h>
#include <stdarg.h>
#include "glut.h"
#include "glaux.h"

class TextObject {
public:
	TextObject();
	TextObject(	char* input, 
				GLfloat posX, GLfloat posY, GLfloat posZ, 
				void* font_size, 
				GLfloat red, GLfloat green, GLfloat blue);
	~TextObject();
	char* getOutput();
	void setXpos(GLfloat x);
	void setYpos(GLfloat y);
	void setZpos(GLfloat z);
	GLvoid draw();
private:
	char output[256];
	GLfloat posX;
	GLfloat posY;
	GLfloat posZ;
	GLfloat color[4];
	void* font_size;
	char* string_iterator;
};

#endif
