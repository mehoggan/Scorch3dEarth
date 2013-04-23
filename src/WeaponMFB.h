#ifndef WEAPON_MFB_H
#define WEAPON_MFB_H

#include <windows.h>
#include "glut.h"

class WeaponMFB : public Weapon{
public:
	WeaponMFB();
	WeaponMFB(int ID);
	~WeaponMFB();
	WeaponMFB* getWeaponInstance();

};

#endif