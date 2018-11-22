/*
Week 8
Class Imp
Author: Anthony McGuigan
*/

#include "weapon.h"
#include <iostream>
#include <string>

weapon::weapon(){

}

weapon::weapon(std::string name, int value, float weight, int weaponHitStrength, int weaponHealth){
	setItemName(name);
	setItemValue(value);
	setItemWeight(weight);
	setWeaponHitStrength(weaponHitStrength);
	setWeaponHealth(weaponHealth);
}

void weapon::weaponToString() {
	std::string ToString = ("Weapon: " + getItemName() +
		", Worth: " + std::to_string(getItemValue()) + " Gold Coins, Hit Strength: " +
		std::to_string(getWeaponHitStrength()) + 
		", Weapon Health: " + std::to_string(getWeaponHealth()));
	std::cout << ToString << std::endl;
}

//_____hit strength_____
int weapon::getWeaponHitStrength() {
	return weaponHitStrength_;
}
void weapon::setWeaponHitStrength(int weaponHitStrength) {
	weaponHitStrength_ = weaponHitStrength;
}

//_____health_____
int weapon::getWeaponHealth() {
	return weaponHealth_;
}
void weapon::setWeaponHealth(int weaponHealth) {
	weaponHealth_ = weaponHealth;
}