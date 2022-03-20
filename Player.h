#pragma once
#include "Çì´õ.h"

class Player
{
private:
	string name;
	int att;
	int hp;
	
public:
	
	Player(string name, int hp, int att);
	void DIe();
	
	void PrintInfo();
	string SetName();
	
	

};