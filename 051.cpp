//Write a function that returns the square of a number.
#include <iostream>
 int sqr(int a){
    return a*a;
 }
 int main() {
    int num;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>> num;
    int result = sqr(num);
    std::cout<<"Result: "<< result <<std::endl;
    return 0;
 }