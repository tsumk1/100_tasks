//Read a word and count how many ‘a’ letters it has.
#include <iostream>
#include <string>
int main(){
std::string word;
std::cout<<"Enter a word: "<<std::endl;
std::cin>> word;
int a_count = 0;

for(char i : word){
    if(i == 'a'|| i == 'A'){
        a_count++;
    }
}
std::cout<<"The number of 'a' : "<< a_count<<std::endl; 
    return 0;
}