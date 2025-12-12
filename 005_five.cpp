//The user enters a number n. Calculate n! (the factorial). 
#include <iostream>
int main () {
	int n;
	std::cout<<"Enter number: "<<std::endl;
	std::cin>> n;

        int res = 1;
	for(int i = 1; i<=n ; i++){
	res *= i; // res = 1 , so res*=i = res*i
	}
	std::cout<<res<<std::endl;

	return 0;
}
