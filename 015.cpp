//Read a number and check if it is zero.
#include <iostream>
int main () {
int n;
std::cout<<"Enter number: "<<std::endl;
std::cin>> n;

if(n == 0){
	std::cout<<"The number is zero."<<std::endl;
	return 0;
}
std::cout<<"The number isn't zero."<<std::endl;

return 0;
}
