#include <iostream>
#include "person.h"
#include "person.cpp"
#include "player.h"
#include "player.cpp"
#include "engineer.h"
#include "engineer.cpp"
#include "nurse.h"
#include "nurse.cpp"
#include "prisoner.h"
#include "prisoner.cpp"

int main() {

	Person person ("Jim Ng",21,"San Diago, 34 St #12");

	std::cout << "Person" << person << std::endl;

	std::cout << "---------------" << std::endl;

	Engineer engineer("Civil constructor");

	std::cout << "Engineer " << engineer << std::endl;

	std::cout << "---------------" << std::endl;

	Player player ("BasketBall");

	player.m_full_name = "Michael Jordan";
	// player.m_age = 24;
	// player.m_adress = "New York, The Grand, #8"; // Error private

	std::cout << "Player " << player << std::endl;

	std::cout << "---------------" << std::endl;

	Nurse nurse;

	// nurse.m_full_name = "Pearl Swarm"; //public -> protected Error
	// nurse.m_age = 24; // protected -> protected error
	// nurse.m_adress = "New York, The Grand, #8"; // Error private

	std::cout << "Nurse " << nurse << std::endl;

	std::cout << "---------------" << std::endl;

	Prisoner prisoner;

	// prisoner.m_full_name = "Pearl Swarm"; //public -> pivate  Error
	// prisoner.m_age = 24; // protected -> private error
	// prisoner.m_adress = "New York, The Grand, #8"; // Error private

	std::cout << "Prisoner " << prisoner << std::endl;
	
	return 0;
}