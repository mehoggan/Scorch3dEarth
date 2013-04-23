#ifndef WEAPON_REVIVE_H
#define WEAPON_REVIVE_H

#include <windows.h>
#include "glut.h"

class WeaponRevive : public Weapon{
public:
	WeaponRevive();
	WeaponRevive(int ID);
	~WeaponRevive();
	WeaponRevive* getWeaponInstance();
	virtual void causeEffectToTank(GLfloat distance, Tank* tank);
	void playExplosionSFX();
};

#endif