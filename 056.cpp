//Write a function that returns the absolute value of a number.
#include <iostream>
#include <cmath>

int absValue(int a) {
    return abs(a);
}

int main () {
    int num; 
    std::cout<< "Enter a number: "<<std::endl;
    std::cin>> num;
    int result = absValue(num);
    std::cout<<"Result: "<<result<<std::endl;
    return 0;
}
