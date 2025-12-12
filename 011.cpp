//Read two numbers and print their difference.
#include <iostream>
int main() {
int a, b; 
    std::cout<<"Enter first number: "<<std::endl;
    std::cin>> a;
    std::cout<<"Enter second number: "<<std::endl;
    std::cin>> b;

    if(a>b){
    int differ = a-b;
    std::cout<< "Difference: " << differ <<std::endl;
    return 0;
    
    }else {
    
    int differ = b-a;
    std::cout<< "Difference: "<< differ<<std::endl;

    
    }







return 0;
}
