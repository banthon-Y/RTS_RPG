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

int main() {
	armour sword("Vest", 347, 18, 99, 100, Wood);

	sword.itemToString();
	sword.armourToString();
}