#include "Player.h"


string Player::SetName()
{
	cout << " 이름을 입력하세요 " << endl;
	cin >> name;
	return name;
}


void Player::PrintInfo()
{
	cout << " -----Player-------- " << endl;
	cout << "이름 : " << name << endl;
	cout << "체력 : " << hp << endl;
	cout << "공격력 : " << att << endl;
}



Player::Player(string name, int hp, int att)
{
	
	this->name = name;
	this->hp = hp;
	this->att = att;
}

void Player::DIe()
{
	if (hp <= 0)
	{
		cout << " 죽음 " << endl;
	}
}
