#include <iostream>
#include "person.h"
#include "person.cpp"
#include "engineer.h"
#include "engineer.cpp"
#include "civilengineer.h"
#include "civilengineer.cpp"

int main(){

    Person person("Jim",13,"Saint Saul-#21");
    std::cout << "person: " << person << std::endl;

    Engineer engineer;
    std::cout << "engineer: " << engineer << std::endl;

    CivilEngineer civilengineer;
    std::cout << "civilengineer: " << civilengineer << std::endl;
  
    return 0;
}