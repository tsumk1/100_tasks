//Read a sentence and count all vowels.
#include <iostream>
#include <string>
int main () {
std::string sent;
std::cout<<"Enter a sentense: "<<std::endl;
std::getline(std::cin, sent);
int v_count = 0;
for(char v : sent){
    if(v == 'A'|| v == 'a' || v == 'E' || v == 'e' || v == 'I' || v == 'i' || v == 'O' || v == 'o' || v == 'U' || v == 'u' || v == 'Y' || v == 'y'){
        v_count++;
    }  
}
std::cout<<"Number of vowels: " <<v_count<<std::endl;
    return 0;
} 