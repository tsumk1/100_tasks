//Read three numbers and print the largest and the smallest. 
#include <iostream>
int main () {
int a, b, c;
std::cout<<"Enter first number: "<<std::endl;
std::cin>> a;
std::cout<<"Enter second number: "<<std::endl;
std::cin>> b;
std::cout<< "Enter third number: "<<std::endl;
std::cin>> c;

if(a > b && a > c){
	std::cout<<"The largest number is: " << a <<std::endl;
}else if (b > a && b > c){
	std::cout<<"The largest number is: "<< b <<std::endl;

}else {
	std::cout<<"The largest number is: "<< c <<std::endl;

}

if(a < b && a < c){
	std::cout<<"The smallest number: "<< a <<std::endl;
}else if (b < a && b < c){
	std::cout<<"The smallest number: "<< b <<std::endl;

}else {
	std::cout<<"The smallest number: "<< c <<std::endl;

}

return 0;
}
