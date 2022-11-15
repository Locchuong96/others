#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <string_view>
#include <iostream>

class Person{
    friend std::ostream& operator<<(std::ostream& , const Person& person);

public:
    Person();

    Person(std::string_view fullname,int age, std::string_view address);
    
    ~Person();

    Person(const Person& source);

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

    int add(int a, int b) const{
        return a + b;
    }

    int add(int a, int b, int c) const{
        return a + b + c;
    }

    void do_something();

    //Setters
    void set_full_name(std::string full_name_param){
        m_full_name = full_name_param;
    }

    void set_age(int age_param){
        m_age = age_param;
    }

    void set_address(std::string address_param){
        m_address = address_param;
    }

public:
    std::string m_full_name{"None"};
protected:
    int m_age{0};
private:
    std::string m_address{"None"};
};

#endif // PERSON_H