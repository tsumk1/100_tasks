//Read a word and print it in lowercase (use loop).
#include <iostream>
#include <string>
#include <cctype>
int main () {
    std::string word;
    std::cout<<"Enter the word in uppercase: "<<std::endl;
    std::cin>> word;
    
    for(int i = 0; i < word.length(); i++){
        word[i] = std::tolower(static_cast<unsigned char>(word[i]));
    }
    std::cout<< word << std::endl;

    return 0;
}