//Write a function that checks if a number is odd.
#include <iostream>

bool isOdd(int a){
    return a%2 != 0;
}
int main () {
    int num;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>> num;
    int result = isOdd(num);
    if(result == 1){
        std::cout<<"The number is odd"<<std::endl;
    }else{
        std::cout<<"The number isn`t odd"<<std::endl;
    }

    return 0;
}