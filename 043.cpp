//Read a string and check if it equals “hello”.
#include <iostream>
#include <string>
int main () {
    std::string word;
    std::cout<<"Enter a word: "<<std::endl;
    std::cin>> word;
    if(word == "Hello"){
        std::cout<<"The word is equal to 'Hello' "<<std::endl;
    }else{
        std::cout<<"The word isn`t equal to 'Hello' "<<std::endl;
    }

    return  0; 
}
