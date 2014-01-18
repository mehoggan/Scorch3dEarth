#ifndef ITEM_SHIELD_H
#define ITEM_SHIELD_H

#include <windows.h>
#include "glut.h"

class ItemShield : public Item{
public:
	ItemShield();
	ItemShield(int ID);
	~ItemShield();
	ItemShield* getItemInstance();
	bool causeEffectToTank(Tank* tank);
	void playUseSFX();
};

#endif