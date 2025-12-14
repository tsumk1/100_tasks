//Read 5 numbers and print their average.
#include <iostream>
int main() {
int arr[] = {1, 2, 3, 4, 6};
int a = 0;

for(int i = 0; i<5; i++){
a += arr[i];

} 
std::cout<<"Result: "<< a/2 <<std::endl;
return 0;
}
