//Read two strings and check if they are the same.
#include <iostream>
#include <string>
int main (){
    std::string first, second;
    std::cout<<"Enter first word: "<<std::endl;
    std::cin>> first;
    std::cout<<"Enter second word: "<<std::endl;
    std::cin>> second;
    if(first == second){
        std::cout<<"These words are the same"<<std::endl;
    }else{
        std::cout<<"These words aren`t the same"<<std::endl;
    }

    return 0;
}