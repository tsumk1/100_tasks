//Write a program that reads two integers and outputs their sum.
#include <iostream>

int main (){

	int a, b;

	std::cout<<"Enter first number: "<<std::endl;
	std::cin>> a ;
	std::cout<<"Enter second number: "<<std::endl;
	std::cin>> b;

	int c = a+b;
	std::cout<<"Result: "<< c <<std::endl;
	return 0;

}
