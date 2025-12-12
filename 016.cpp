//Read two numbers and print whether they are equal. 
#include <iostream>
int main () {
int a, b;
std::cout<<"Enter first number: "<<std::endl;
std::cin>> a;
std::cout<< "Enter second number: "<<std::endl;
std::cin>> b;
if(a == b){
	std::cout<<"The numbers is equal."<<std::endl;
	return 0;
}
std::cout<<"The number isn't equal."<<std::endl;

return 0;
}
