//Read a word and count how many ‘user’ letters it has. (It means letter which user choose)
#include <iostream>
#include <string>
int main(){
std::string word;
char user_letter;
std::cout<<"Enter a letter: "<<std::endl;
std::cin>> user_letter;
std::cout<<"Enter a word: "<<std::endl;
std::cin>> word;
int a_count = 0;

for(char i : word){
    if(i == user_letter){
        a_count++;
    }
}
std::cout<<"The number of 'a' : "<< a_count<<std::endl; 
    return 0;
}