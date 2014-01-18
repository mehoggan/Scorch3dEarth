#ifndef ITEM_SMALL_REPAIR_H
#define ITEM_SMALL_REPAIR_H

#include <windows.h>
#include "glut.h"

class ItemSmallRepair : public Item{
public:
	ItemSmallRepair();
	ItemSmallRepair(int ID);
	~ItemSmallRepair();
	ItemSmallRepair* getItemInstance();
	bool causeEffectToTank(Tank* tank);
	void playUseSFX();
};

#endif