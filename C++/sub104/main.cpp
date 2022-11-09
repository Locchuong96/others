# include <iostream>

// class Dog{
// 	// Default
// 	std::string m_name;
// };

class Dog{
	// Publish
	public:
		std::string m_name;
};

struct Cat{
	// Default
	std::string m_name;
};

struct Point{
	double x;
	double y;
};

void print_point(const Point& point){
	std::cout << "Point[x: " << point.x << ",y: " << point.y << "]" << std::endl;
}

int main(int argc,char** argv){
	
	Dog dog1;

	Cat cat1;

	Point point1;

	dog1.m_name ="Fluffy";

	cat1.m_name ="Kitty";

	point1.x = 0.0;
	point1.y = 1.2;

	print_point(point1);

	return 0;
}