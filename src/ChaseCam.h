#ifndef CHASECAM_H
#define CHASECAM_H

#include "glew.h"
#include "glut.h"

class ChaseCam {
public:
	ChaseCam();
	ChaseCam(GLfloat* targetPos,GLfloat* targetAt);
	~ChaseCam();
	void view();
	void setShakeCam(int magnitude);
	void updateShakeCam();
	void updateFactor();
	void resetFactor();
private:
	GLfloat* targetPos;
	GLfloat* targetAt;
	int shakeCamPos[3];
	GLfloat backFactor;
	GLfloat upFactor;
};

#endif