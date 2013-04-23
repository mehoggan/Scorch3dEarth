#ifndef WEAPON_DEFAULT_H
#define WEAPON_DEFAULT_H

#include <windows.h>
#include "glut.h"

class WeaponDefault : public Weapon{
public:
	WeaponDefault();
	WeaponDefault(int ID);
	~WeaponDefault();
	WeaponDefault* getWeaponInstance();
};

#endif