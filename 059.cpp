//Write a function that returns the sum of digits of a number.
#include <iostream>
#include <cmath>

int sumOfDigits (int a){
int sum;
a = abs(a);

   while (a > 0) {
        sum += a % 10; 
        a /= 10;       
    }

    return sum;
}
int main (){

int num;
std::cout<<"Enter a number: "<<std::endl;
std::cin>> num;
int result = sumOfDigits(num);
std::cout<<"Result: "<< result<<std::endl;

    return 0; 
}


