#ifndef ITEM_CLOAK_H
#define ITEM_CLOAK_H

#include <windows.h>
#include "glut.h"

class ItemCloak : public Item{
public:
	ItemCloak();
	ItemCloak(int ID);
	~ItemCloak();
	ItemCloak* getItemInstance();
	bool causeEffectToTank(Tank* tank);
};

#endif