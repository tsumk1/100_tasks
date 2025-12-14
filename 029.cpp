//Print the sum of digits of a number.
#include <iostream>
int main () {
int n;
std::cout<<"Enter number: "<<std::endl;
std::cin>> n;
int sum = 0;

std::cout<<"Result: "<<std::endl;

while (n != 0){
sum += n%10;
n/= 10;

}
std::cout<< sum <<std::endl;

return 0;
}
