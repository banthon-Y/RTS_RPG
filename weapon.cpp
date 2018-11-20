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

weapon::weapon(std::string weaponName, int weaponValue, float weaponWeight, int weaponHitStrength, int weaponHealth){
	setWeaponName(weaponName);
	setWeaponValue(weaponValue);
	setWeaponWeight(weaponWeight);
	setWeaponHitStrength(weaponHitStrength);
	setWeaponHealth(weaponHealth);
}

void weapon::weaponToString() {
	std::string ToString = ("Weapon: " + getWeaponName() +
		", Worth: " + std::to_string(getWeaponValue()) + " Gold Coins, Hit Strength: " +
		std::to_string(getWeaponHitStrength()) + 
		", Weapon Health: " + std::to_string(getWeaponHealth()));
	std::cout << ToString << std::endl;
}

//_____GETTERS AND SETTERS_____
//_____name_____
std::string weapon::getWeaponName() {
	return weaponName_;
}
void weapon::setWeaponName(std::string weaponName) {
	weaponName_ = weaponName;
}

//_____value_____
int weapon::getWeaponValue() {
	return weaponValue_;
}
void weapon::setWeaponValue(int weaponValue) {
	weaponValue_ = weaponValue;
}

//_____weight_____
float weapon::getWeaponWeight() {
	return weaponWeight_;
}
void weapon::setWeaponWeight(int weaponWeight) {
	weaponWeight_ = weaponWeight;
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