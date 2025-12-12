//Print numbers from 1 to n.
#include <iostream>
int main() {
int n ;
std::cout<<"Enter number: "<<std::endl;
std::cin>> n;
std::cout<< "Result: "<<std::endl;

for(int i = 1; i<=n; i++){
	std::cout<< i <<std::endl;
}
return 0;

}
