/*
Week 8
Class Imp
Author: Anthony McGuigan
*/

#include "armour.h"
#include <iostream>
#include <string>

armour::armour() {

}

armour::armour(std::string armourName, int value, float weight, 
	int armourDefence, int armourHealth, ArmourType armourType) {
	setItemName(armourName);
	setItemValue(value);
	setItemWeight(weight);
	setArmourDefence(armourDefence);
	setArmourHealth(armourHealth);
	setArmourType(armourType);
}

void armour::armourToString() {
	std::string ToString = ("Weapon: " + getItemName() +
		", Worth: " + std::to_string(getItemValue()) + " Gold Coins, Defence: " +
		std::to_string(getArmourDefence()) +
		", Armour Health: " + std::to_string(getArmourHealth()) + ", Armour Material: " + std::to_string(getArmourType()));
	std::cout << ToString << std::endl;
}
//_____defence_____
int armour::getArmourDefence() {
	return defence_;
}
void armour::setArmourDefence(int armourDefence) {
	defence_ = armourDefence;
}
//_____health_____
int armour::getArmourHealth() {
	return armourHealth_;
}
void armour::setArmourHealth(int armourHealth) {
	armourHealth_ = armourHealth;
}
//_____type_____
ArmourType armour::getArmourType() {
	return armourType_;
}
void armour::setArmourType(ArmourType armourType) {
	armourType_ = armourType;
}