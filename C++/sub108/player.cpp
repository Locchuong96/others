#ifndef PLAYER_CPP
#define PLAYER_CPP

#include<iostream>
#include "player.h"

Player::Player(){}

Player::Player(std::string game_param,std::string first_name_param,std::string last_name_param)
	: m_game(game_param){
		first_name = first_name_param;
		last_name = last_name_param;
		// first_name = "John"; // "" NOT ''
		// last_name = "Snow";
	}

std::ostream& operator<<(std::ostream& out,const Player& player){
	out << "Player [ name:" << player.first_name << " "
		<< player.last_name << " game: " << player.get_game() << "]";
	return out;
}

Player::~Player(){}

#endif