//Write a function that returns true if a number is divisible by 7
#include <iostream>

bool check(int a){
    return a%7 == 0;
}
int main(){
    int num;
    std::cout<<"Enter number: ";
    std::cin>> num;
    std::cout<<"--------------------------"<<std::endl;

    if(check(num)){
        std::cout<<"True"<<std::endl;
    }else{
        std::cout<<"False"<<std::endl;
    }

    return 0;
}