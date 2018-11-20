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
	std::string weaponName_;
	int weaponValue_;
	float weaponWeight_;
	int weaponHitStrength_;
	int weaponHealth_;

public:
	//_____CONSTRUCTORS_____
	weapon();
	weapon(std::string weaponName, int weaponValue, float weaponWeight, 
		int weaponHitStrength, int weaponHealth);
	void weaponToString();

	//_____GETTERS AND SETTERS_____
	std::string getWeaponName();
	void setWeaponName(std::string weaponName);
	
	int getWeaponValue();
	void setWeaponValue(int weaponValue);
	
	float getWeaponWeight();
	void setWeaponWeight(int weaponWeight);
	
	int getWeaponHitStrength();
	void setWeaponHitStrength(int weaponHitStrength);
	
	int getWeaponHealth();
	void setWeaponHealth(int weaponHealth);
};

