#ifndef ITEM_ANTI_ACID_H
#define ITEM_ANTI_ACID_H

#include <windows.h>
#include "glut.h"

class ItemAntiAcid : public Item{
public:
	ItemAntiAcid();
	ItemAntiAcid(int ID);
	~ItemAntiAcid();
	ItemAntiAcid* getItemInstance();
	bool causeEffectToTank(Tank* tank);
	void playUseSFX();
};

#endif