#ifndef WEAPON_BFB_H
#define WEAPON_BFB_H

#include <windows.h>
#include "glut.h"

class WeaponBFB : public Weapon{
public:
	WeaponBFB();
	WeaponBFB(int ID);
	~WeaponBFB();
	WeaponBFB* getWeaponInstance();

};

#endif