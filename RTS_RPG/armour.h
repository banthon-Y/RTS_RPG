/*
Week 8
Class Imp
Author: Anthony McGuigan
*/

#pragma once
#include "item.h"
#include <iostream>
#include <string>

enum ArmourType { Cardboard, Leather, Wood, Iron, Steel };

class armour : public item
{
private:
	int defence_;
	int armourHealth_;
	ArmourType armourType_;
public:
	armour();
	armour(std::string armourName, int value, float weight, 
		int armourDefence, int armourHealth, ArmourType armourType);
	void armourToString();

	int getArmourDefence();
	void setArmourDefence(int armourDefence);

	int getArmourHealth();
	void setArmourHealth(int armourHealth);

	ArmourType getArmourType();
	void setArmourType(ArmourType armourType);
};

