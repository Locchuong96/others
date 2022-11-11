#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include "person.h"
#include "person.cpp"

class Player : public Person{
	friend std::ostream& operator<<(std::ostream& out,const Player& player);

public:
	Player();

	Player(std::string game_param,std::string first_name_param,std::string last_name_param);

	~Player();

	//Settter

	std::string get_game() const {
		return m_game;
	}

private:
	std::string m_game{"None"};
};

#endif