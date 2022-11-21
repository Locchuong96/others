#include <iostream>

// Interesting fact #1
// class Plane final{
// Plane()=default;
// };

// This will trigger a compiler error
// class FighterJet : public Plane{
// }

int main(){
	std::cout << "Hello " << std::endl;
	return 0;	
}