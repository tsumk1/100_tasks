//Read a number and check if it is positive or negative. 
#include <iostream>
int main () {
int n;
std::cout<<"Enter number: "<<std::endl;
std::cin>> n;
if(n < 0 && n != 0){
	std::cout<<"The number is negative."<<std::endl;
}else {
	std:: cout<<"The number is positive."<<std::endl;

}
return 0;
}
