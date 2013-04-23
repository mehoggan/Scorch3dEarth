#ifndef WEAPON_EMP_H
#define WEAPON_EMP_H

#include <windows.h>
#include "glut.h"

class WeaponEMP : public Weapon{
public:
	WeaponEMP();
	WeaponEMP(int ID);
	~WeaponEMP();
	WeaponEMP* getWeaponInstance();
	virtual void causeEffectToTank(GLfloat distance, Tank* tank);
	void playExplosionSFX();
};

#endif