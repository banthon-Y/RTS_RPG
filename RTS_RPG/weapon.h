/*
Week 8
Class Imp
Author: Anthony McGuigan
*/

#pragma once
#include <iostream>
#include <string>
#include "item.h"
class weapon : public item
{
private:
	int weaponHitStrength_;
	int weaponHealth_;

public:
	weapon();
	weapon(std::string name, int value, float weight, 
		int weaponHitStrength, int weaponHealth);
	void weaponToString();

	int getWeaponHitStrength();
	void setWeaponHitStrength(int weaponHitStrength);
	
	int getWeaponHealth();
	void setWeaponHealth(int weaponHealth);
};

