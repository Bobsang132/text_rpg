#include "Player.h"


string Player::SetName()
{
	cout << " �̸��� �Է��ϼ��� " << endl;
	cin >> name;
	return name;
}


void Player::PrintInfo()
{
	cout << " -----Player-------- " << endl;
	cout << "�̸� : " << name << endl;
	cout << "ü�� : " << hp << endl;
	cout << "���ݷ� : " << att << endl;
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
		cout << " ���� " << endl;
	}
}
