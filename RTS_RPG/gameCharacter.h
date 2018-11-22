/*
Week 8
Class Imp
Author: Anthony McGuigan
20/11/2018 - payday ;)
*/

#include "item.h"
#include "weapon.h"
#include "armour.h"
#include <iostream>
#include <string>
#pragma once

enum CharacterState{Idle, Running, Sleeping, 
	Walking, Defending, Attacking, Dead};

class gameCharacter : public armour, public weapon, public item
{
private:
	std::string characterName_;
	float health_;
	float weightLimit_;
	weapon weapon_;
	armour armour_;
	int food_;
	CharacterState state_;
public:
	gameCharacter();
	gameCharacter(std::string name, float health, float weightLimit, weapon Weapon, armour Armour, int food, CharacterState state);
};

