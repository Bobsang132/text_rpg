#pragma once
#include "Item.h"

class Inventory : public Item
{
	vector<Item*> slots;
public:
	
	Inventory();
	void ShowInventoryInfo();
	
	
};