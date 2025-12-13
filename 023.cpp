//Print all multiples of 3 from 1 to 100.
#include <iostream>
int main () {
int n = 100;
std::cout<<"All multiples of 3 from 1 to 100."<<std::endl;//Тобто кратні числу 3 :)

for(int i = 0; i<=100; i++){
	if(i%3 == 0){
		std::cout<< i <<std::endl;
	}
}

return 0;
}
