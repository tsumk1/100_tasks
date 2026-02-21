//Write a function that returns true if a number is negative
#include <iostream>

bool ifPositive(int a){
    return a<0;
}
int main(){
    int num;
    std::cout<<"Enter number: "<<std::endl;
    std::cin>> num;
    std::cout<<"--------------------------------"<<std::endl;
    if(ifPositive(num)){
        std::cout<<"True"<<std::endl;
    }else{
        std::cout<<"False"<<std::endl;
    }
    
    return 0;
}