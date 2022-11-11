#ifndef PRISONER_H
#define PRISONER_H

# include "person.h"

// Nurse will doe protected inhertitance

class Prisoner : private Person {
	friend std::ostream& operator<<(std::ostream& , const Prisoner& prisoner);
public:

	Prisoner();
	~Prisoner();

	void get_catch(){
		m_full_name = "Helen Swarm"; // public -> private OK
		m_age = 24; // protected -> private OK
		// m_address = "897-78-723"; // Compiler error
	}

private:
	int m_year {22};
};

#endif