//Print even numbers from 2 to n.
#include <iostream>
int main() {
int n;
std::cout<<"Enter number: "<<std::endl;
std::cin>> n;
std::cout<<"Result: "<<std::endl;

for(int i = 2; i<n; i++){
	std::cout<< i++ <<std::endl;
}

return 0;
}
