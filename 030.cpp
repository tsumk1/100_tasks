//Read 5 numbers into an array and print them.
#include <iostream>
int main () {
int arr[5];
std::cout<<"Enter 5 digits using \"Enter\": "<<std::endl;

for (int i = 0; i < 5; i ++){
	std::cin>> arr[i];
}
std::cout<<"     \nResult: "<<std::endl;

for (int i = 0; i < 5; i ++){
        std::cout<< arr[i] <<std::endl;
}




return 0;
} 
