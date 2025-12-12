//Read age and check if user is adult (18+).
#include <iostream>
int main() {
int age;
std::cout<<"Check if you are an adult.\nEnter your age: "<<std::endl;
std::cin>> age;

if(age < 18){
	std::cout<<"You aren't adult."<<std::endl;
	return 0;
}
std::cout<<"You are adult."<<std::endl;

return 0;
}
