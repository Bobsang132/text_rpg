#include "Inventory.h"

Inventory::Inventory(){}

void Inventory::ShowInventoryInfo()
{
	slots.push_back(new Item("���", 100));
	
	for (int i = 0; i < slots.size(); i++)
	{
		slots[i]->PrinInfo();
	}

	
		
	
}