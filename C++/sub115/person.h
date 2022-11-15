#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <string_view>
#include <iostream>

class Person{

    friend std::ostream& operator<<(std::ostream& out, const Person& person);

public:

    Person();

    Person(std::string_view fullname,int age, std::string_view address);

    Person(const Person& source);

    ~Person();

    //Getters
    std::string get_full_name() const{
        return m_full_name;
    }

    int get_age() const{
        return m_age;
    }

    std::string get_address() const{
        return m_address;
    }

public:
    std::string m_full_name{"None"};
protected:
    int m_age{0};
private:
    std::string m_address{"None"};
};

#endif // PERSON_H