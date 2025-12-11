//Check whether a given integer is prime.

#include <iostream>
int main () {
	int a;
	std::cout<<"Enter number: "<<std::endl;
	std::cin>> a;
	if (a < 2){
		std::cout<<"The number isn't prime."<<std::endl;
	}
	for(int i = 2; i*i <= a; i++){
	if (a%i == 0){
		std::cout<<"The number isn't prime."<<std::endl;
	}
		return 0;
	}
	                std::cout<<"The number is prime."<<std::endl;




return 0;
}
