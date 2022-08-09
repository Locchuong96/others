# include <iostream>

int multiNumber(int num1,int num2){
	return num1 * num2;
}

int main(){
	int first_number {3};
	int second_number {4};

	int result = multiNumber(first_number,second_number);
	std::cout << "Your result is: " << result << std::endl;
	return 0;
}