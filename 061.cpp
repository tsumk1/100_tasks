//Write a function helloName
#include <iostream>
#include <string>
void Hello(std::string name){
	std::cout<<"Hello "<<name<<"!"<<std::endl;
}
int main(){
	std::string name;

	std::cout<<"Enter your name: ";
	std::getline(std::cin, name);

	Hello(name);
return 0;
}

