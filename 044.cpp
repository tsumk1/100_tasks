//Read a word and print it in uppercase (use loop).
#include <iostream>
#include <string>
#include <cctype>
int main () {
    std::string word;
    std::cout<<"Enter a word: "<<std::endl;
    std::cin>> word;
    
    for(int i = 0; i < word.length(); i++){
        word[i] = std::toupper(static_cast<unsigned char>(word[i]));
    }
    std::cout<< word << std::endl;

    return 0;
}