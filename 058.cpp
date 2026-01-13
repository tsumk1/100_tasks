//Write a function that returns the smaller of two numbers.
#include <iostream>

int theSmaller(int a, int b){
    if(a<b){
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
    int result = theSmaller(num1, num2);
    std::cout<<"The smaller number is:  "<<result<<std::endl;

    return 0;
}