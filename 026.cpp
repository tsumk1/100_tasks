//Count how many numbers from 1 to 100 are odd.
#include <iostream>
int main() {
int n = 0;
std::cout<<"How many numbers from 1 to 100 are odd.\nResult: "<<std::endl;

for(int i = 1; i<=100;  i++){
	if(i%2 != 0){
	n++;
	}	
}
std::cout<< n <<std::endl;

return 0;
}
