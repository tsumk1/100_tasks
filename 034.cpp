//Read 5 numbers and print their sum.
#include <iostream>
int main () {
int arr [] = {1, 2, 3, 4, 5};
int a = 0;
std::cout<<"Sum of 5 nuimbers of array.\n"<<std::endl;
for(int i = 0; i < 5; i++){
	a += arr[i];
}
std::cout<<"Result:      "<< a<<std::endl;
return 0; 
} 
