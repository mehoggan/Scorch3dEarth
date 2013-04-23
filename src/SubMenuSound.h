#ifndef SUB_MENU_SOUND_H
#define SUB_MENU_SOUND_H

#include <windows.h>
#include "glew.h"
#include "glut.h"

class TextObject;
class SubMenu;
class ControlItem;
class ControlItemCheckBox;
class ControlItemSelectionBox;

const int NUM_CONTROL_ITEMS_SND = 2;

class SubMenuSound : public SubMenu{
	public:
		SubMenuSound();
		SubMenuSound(int ID,
					GLfloat xPos, GLfloat yPos, GLfloat zPos, 
					GLfloat red, GLfloat green, GLfloat blue, 
					GLint width, GLint height, char* caption,
					GLfloat percentBorder);
		~SubMenuSound();
		int getUNIQUEIDENTIFIER();
		void setUNIQUEIDENTIFIER(int ID);
		GLfloat getXPos();
		void setXPos(GLfloat newXpos);
		GLfloat getYPos();
		void setYPos(GLfloat newYpos);
		GLfloat getZPos();
		void setZPos(GLfloat newZpos);
		GLfloat getRed();
		void setRed(GLfloat red);
		GLfloat getGreen();
		void setGreen(GLfloat green);
		GLfloat getBlue();
		void setBlue(GLfloat blue);
		GLint getWidth(); 
		void setWdith(GLint width);
		GLint getHeight();
		void setHeight(GLint height); 
		char* getCaption();
		void setCaption(char* caption);
		GLfloat getPerecentBorder();
		void setPercentBorder(GLfloat percent);
		void draw();
		const char* collectData();
		void subMenuMouseTest(int x, int y, int buttonDown);
		void updateMouse(int x, int y);
		void changeVolumes(ControlItem* TheSubMenuItem);
	private:
		int UNIQUEIDENTIFIER;
		GLfloat xPos;
		GLfloat yPos;
		GLfloat zPos;
		GLfloat color[4];
		GLint width;
		GLint height;
		char* caption;
		GLfloat percentBorder;
		TextObject* label;
		ControlItem* subMenuButton[NUM_CONTROL_ITEMS_SND];
		ControlItem* buttonPressed;
};

#endif	//	SUB_MENU_SOUND_H