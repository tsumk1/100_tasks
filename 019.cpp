//Print numbers from n to 1.
#include <iostream>
int main () {
int n;
std::cout<<"Enter number: "<<std::endl;
std::cin>> n;
std::cout<<"Result: "<<std::endl;
for(int i = n; i>=1; i--){
	std::cout<< i <<std::endl;
}

return 0;
}
