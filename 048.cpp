//Read a string and print each character on a new line.
#include <iostream>
#include <string>
int main (){
    std::string word;
    std::cout<<"Enter a word: "<<std::endl;
    std::cin>> word; 
    std::cout<< "----------------------------"<<std::endl;
    for(char i : word){
        std::cout<< i <<std::endl;
    }

    return 0;
}