/*
Week 8
Class Imp
Author: Anthony McGuigan
20/11/2018 - payday ;)
*/

#include "item.h"
#include "weapon.h"
#include <iostream>
#include <string>

int main() {
	weapon sword("Great Sword", 347, 18, 99, 100);
	item smallsword("Sword", 126, 12);

	smallsword.itemToString();
	sword.weaponToString();
}