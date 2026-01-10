#include <iostream>
#include <string>
int main(){
    std::string word;
    std::cout<<"Enter word: "<<std::endl;
    std::cin>> word;

    int len = word.length();
    std::cout<<"Lenght of your word: "<< len<<std::endl;

    return 0;
}