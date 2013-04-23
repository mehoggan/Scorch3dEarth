#ifndef WEAPON_ATOM_H
#define WEAPON_ATOM_H

#include <windows.h>
#include "glut.h"

class WeaponAtom : public Weapon{
public:
	WeaponAtom();
	WeaponAtom(int ID);
	~WeaponAtom();
	WeaponAtom* getWeaponInstance();
};

#endif