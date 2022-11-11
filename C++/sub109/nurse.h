#ifndef NURSE_H
#define NURSE_H

# include "person.h"

// Nurse will doe protected inhertitance

class Nurse : protected Person {
	friend std::ostream& operator<<(std::ostream& , const Nurse& nurse);
public:

	Nurse();
	~Nurse();

	void treat_unwell_person(){
		m_full_name = "Helen Swarm"; // public -> protected OK
		m_age = 24; // protected -> protected OK
		// m_adress = "897-78-723";// Compiler error
	}

private:
	int m_cert_id {22};
};

#endif