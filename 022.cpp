//Print the multiplication table for n.
#include <iostream>
int main () {
	int n;
	std::cout<<"Multiplication table.\nEnter number: "<<std::endl;
	std::cin>> n;
	for(int i = 0; i<=10; i++){
		std::cout<<n << "*"<< i <<"="<< n * i <<std::endl;
	
	}



return 0;
}
