#include "Item.h"

Item::Item(){}

Item::Item(string name, int price)
{
	this->name = name;
	this->price = price;
}

void Item::PrinInfo()
{
	cout << "[ " << name << " ]" << "���� : " << price << endl;
}
void Item::Use()
{
	cout << "���" << endl;
}