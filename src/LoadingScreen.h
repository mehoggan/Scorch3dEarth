#ifndef LOADING_SCREEN_H
#define LOADING_SCREEN_H

#include <windows.h>
#include <stdio.h>
#include <iostream>
#include "glew.h"
#include "glut.h"

class ImageObject;

class LoadingScreen{
	public:
		LoadingScreen();
		LoadingScreen(GLfloat x, GLfloat y, GLfloat z, GLint width, GLint height, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
		~LoadingScreen();
		void draw();
	private:
		GLfloat pos[3];
		GLfloat color[4];
		GLint width, height;
		ImageObject* image;
};
#endif