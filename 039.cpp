#include <iostream>
#include <string>

int main(){

std::string word;
std::cout<<"Enter a word: "<<std::endl;
std::cin>> word;
std::cout<<"Your reversed word: "<<std::endl;

for(int l = word.length()-1; l>=0; l--){
std::cout<< word[l];

}
std::cout<<" "<<std::endl;
    return 0;
}