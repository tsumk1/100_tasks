//Read an integer and determine whether it is even.
#include <iostream>
int main (){
	int a;
	std::cout<<"Enter number: "<<std::endl;
	std::cin>> a;

	if (a%2 == 0){
		std::cout<<"The number is even"<<std::endl;
	}else {
		std::cout<<"The number is odd"<<std::endl;
	}
return 0;



}
