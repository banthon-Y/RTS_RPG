/*
Week 8
Class Imp
Author: Anthony McGuigan
*/

#include "item.h"
#include <iostream>
#include <string>

item::item() {

}


item::item(std::string itemName, int itemValue, float itemWeight){
	setItemName(itemName);
	setItemValue(itemValue);
	setItemWeight(itemWeight);
}

void item::itemToString() {
	std::string ToString = (getItemName() + ", worth " + std::to_string(getItemValue()) + " Gold Coins");
	std::cout << ToString << std::endl;
}

//_____name_____
std::string item::getItemName() {
	return itemName_;
}
void item::setItemName(std::string itemName) {
	itemName_ = itemName;
}

//_____value_____
int item::getItemValue() {
	return itemValue_;
}
void item::setItemValue(int itemValue) {
	itemValue_ = itemValue;
}

//_____weight_____
float item::getItemWeight() {
	return itemWeight_;
}
void item::setItemWeight(float itemWeight) {
	itemWeight_ = itemWeight;
}