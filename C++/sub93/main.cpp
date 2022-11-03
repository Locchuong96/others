# include <iostream>
# include <concepts>

std::integral auto add (std::integral auto a,std::integral auto b){
		return  a + b;
	}

int main(int argc,char** argv){

	int a = 10;
	int b = 20;

	auto result = add(a,b);

	result = add(a,b);
	// std::floating_point result = add(a,b);

	std::floating_point auto result_1 = 1.1;

	std::cout << "result: " << result << std::endl;

	std::cout << "result_1: " << result_1 << std::endl;

	return 0;
}