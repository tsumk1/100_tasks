//The user enters three numbers. Determine and print the largest of them. 
#include <iostream>
int main () {
	int a,b,c;
	std::cout<<"Enter first number: "<<std::endl;
	std::cin>> a;
	std::cout<< "Enter second number: " <<std::endl;
	std::cin>> b;
	std::cout<< "Enter third number: " <<std::endl;
	std::cin>> c;

	if(a > b && a > c){
		std::cout<< "The largest of the numbers is "<< a <<std::endl;
	}else if(b > a && b > c){
		std::cout<< "The largest of numbers is "<< b <<std::endl;
	}else {
		std::cout<<"The largest of numbers is "<< c <<std::endl;
	}
return 0;

}
