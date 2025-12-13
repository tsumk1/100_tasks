//Print numbers divisible by 2 and 3 between 1 and 60.

#include <iostream>
int main () {
	std::cout<< "Print numbers divisible by 2 and 3 between 1 and 60.\nResult: "<<std::endl;

for(int i = 1; i<=60; i++){
	if(i%2==0 && i%3==0){
		std::cout<< i <<std::endl;
	}
}


return 0; 
}
