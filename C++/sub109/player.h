#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "person.h"
#include "person.cpp"

//Player will do public inheritance
class Player : public Person{
	friend std::ostream& operator<<(std::ostream& out, const Player& player);
public:
	Player();
	Player(std::string_view game_param);
	~Player();

	void play(){
		m_age = 23;
		// m_adress = "New York, The Grand, #8";
	}
private:
	std::string m_game{"None"};
};

#endif