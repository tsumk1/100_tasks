// Write a function that returns the larger of two numbers.
#include <iostream>
 int theLarger(int a, int b){
    if(a>b){
        return a;
    }else{
   return b;
    } 
 }
 int main (){
    int num1, num2;
    std::cout<<"Enter first number: "<<std::endl;
    std::cin>> num1;
    std::cout<<"Enter second number: "<<std::endl;
    std::cin>> num2;
    int result = theLarger(num1, num2);
    std::cout<<"Result: "<<result<<std::endl;

    return 0;
 }