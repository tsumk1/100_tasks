//Find the smallest element of an array of size 5.
#include <iostream>
int main () {
int arr[5];

std::cout<<"Enter 5 digits using enter: "<<std::endl;
for(int i = 0; i <5; i++){
	std::cin>> arr[i];
}


int min = arr[0];

for (int i = 1; i < 5; i++){
    if (arr[i] < min) {
            min = arr[i];
        }
  }
    std::cout<<"      \nThe smallest element of an array of size 5: "<< min <<std::endl;

return 0;
}
