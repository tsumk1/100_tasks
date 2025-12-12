//Enter three numbers and display the arithmetic mean of these numbers.
#include <iostream>

int main () {
int a, b, c;
std::cout<<"Enter first number: "<<std::endl;
std::cin>> a;
std::cout<<"Enter second number: "<<std::endl;
std::cin>> b;
std::cout<<"Enter third number: "<<std::endl;
std::cin>> c;

int result = (a+b+c)/2;
std::cout<< "Result: "<< result<<std::endl;


return 0;
}
