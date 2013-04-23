#ifndef Control_ITEM_SELECTION_BOX_H
#define Control_ITEM_SELECTION_BOX_H

#include <windows.h>
#include "glew.h"
#include "glut.h"

class TextObject;
class ControlItem;

class ControlItemSelectionBox : public ControlItem {
public:
	ControlItemSelectionBox();
	ControlItemSelectionBox(	GLfloat xPos, GLfloat yPos, GLfloat zPos, 
								GLfloat red, GLfloat green, GLfloat blue, 
								GLint width, GLint height, char* caption,
								char* menuInfo);
	~ControlItemSelectionBox();
	void draw();
	void mouseClickEvent(GLint x, GLint y, GLint state, bool stillOverControlItemSelectionBox);
	GLfloat getXPos();
	GLfloat getYPos();
	GLfloat getHeight();
	GLfloat getWidth();
	char* collectData();
	void updateMouse(int x, int y);
	
private:
	void setOptionText(int index);
	void setOptionText(char* newText);
	GLfloat xPos;
	GLfloat yPos;
	GLfloat zPos;
	GLfloat color[4];
	GLint width;
	GLint height;
	TextObject* label;
	TextObject* optionText;
	char* caption;
	char* menuInfo;
	char* currentOption;
	int menuState;
	int buttonState; //0 = no button pressed, 1 = up button pressed, 2 = down button pressed
	int numberOfOptions;
	char** allOptions;
};
#endif //Control_ITEM_SELECTION_BOX_H