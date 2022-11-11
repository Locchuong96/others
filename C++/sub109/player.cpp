#ifndef PLAYER_CPP
#define PLAYER_CPP

#include "player.h"
#include <string_view>

Player::Player(){}

Player::Player(std::string_view game_param)
	: m_game(game_param)
	{}

std::ostream& operator<<(std::ostream& out, const Player& player){
	out << "Player: [ game: " << player.m_game
		<< "names: " << player.m_full_name
		<< " " << player.m_age << "]";
		return out;	
}

Player::~Player(){}

#endif