/*
Week 8
Class Imp
Author: Anthony McGuigan
*/

#pragma once
#include <iostream>
#include <string>

class item 
{
private:
	std::string itemName_;
	int itemValue_;
	float itemWeight_;

public:
	item();
	item(std::string itemName, int itemValue, float itemWeight);
	void itemToString();

	std::string getItemName();
	void setItemName(std::string);

	int getItemValue();
	void setItemValue(int itemValue);

	float getItemWeight();
	void setItemWeight(float itemWeight);
};

