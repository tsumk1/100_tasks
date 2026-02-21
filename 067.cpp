//Read two strings and check if they are the same
#include <iostream>
#include <iostream>
int main(){
    std::string string1;
    std::string string2;

    std::cout<<"Enter first string: ";
    std::getline(std::cin, string1);
   
    std::cout<<"Enter second string: ";
    std::getline(std::cin, string2);
 

    std::cout<<"----------------------------------"<<std::endl;

    if(string1==string2){
        std::cout<<"Strings are the same"<<std::endl;
    }else{
        std::cout<<"String are not the same"<<std::endl;
    }

    return 0;

}