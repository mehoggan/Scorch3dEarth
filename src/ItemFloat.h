#ifndef ITEM_FLOAT_H
#define ITEM_FLOAT_H

#include <windows.h>
#include "glut.h"

class ItemFloat : public Item{
public:
	ItemFloat();
	ItemFloat(int ID);
	~ItemFloat();
	ItemFloat* getItemInstance();
	bool causeEffectToTank(Tank* tank);
	void playUseSFX();
};

#endif