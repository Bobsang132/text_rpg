#pragma once
#include "���.h"

class Item
{
protected:
	string name;
	int price;
public:
	Item();
	Item(string name, int price);
	void Use();
	void PrinInfo();
	
};
