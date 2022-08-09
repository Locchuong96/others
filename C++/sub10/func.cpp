# include <iostream>

int addNumbers(int first_number,int second_number){
	int sum = first_number + second_number;
	return sum;
}

int main(){

	int num1 {12}; // Statement
	int num2 {3};
	
	std::cout << "The first number is " << num1 << std::endl;
	std::cout << "The second number is " << num2 << std::endl;

	int total = addNumbers(num1,num2);
	std::cout << "Sum :" << total << std::endl;

	total = addNumbers(12,34); // you can not declare a statement twice
	std::cout << "Sum :" <<  total << std::endl;

	std::cout << "Sum :" << addNumbers(14,4) << std::endl;
	
	return 0;
}