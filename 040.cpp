//Read a sentence and count the spaces.
#include <iostream>
#include <string>
int main(){
std::string sen;
std::cout<<"Enter a sentence: "<<std::endl;
std::getline(std::cin, sen);
int count = 0;
for(char s : sen){
    if(s == ' '){
        count++;
    }
}

std::cout<<"Number of spaces in your sentence: "<< count <<std::endl;

    return 0; 
}