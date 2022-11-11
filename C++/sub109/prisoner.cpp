#ifndef PRISONER_CPP
#define PRISONER_CPP


Prisoner::Prisoner(){}
Prisoner::~Prisoner(){}

std::ostream& operator<<(std::ostream& out, const Prisoner& prisoner){
	out << "Prisoner [" <<prisoner.m_full_name << " " << prisoner.m_age << " " << prisoner.get_adress() << "]";
	return out;
}

#endif