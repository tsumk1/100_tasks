//Count how many numbers from 1 to 100 are even.
#include <iostream>
int main () {
int n = 0;
std::cout<<"How many numbers from 1 to 100 are even."<<std::endl;
std::cout<<"Result: "<<std::endl;

for(int i = 0; i<100; i++)
	if(i%2==0){
	 n++ ;
	}

std::cout<< n <<std::endl;
return 0;
}

