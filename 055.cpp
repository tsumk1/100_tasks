//Write a function that prints numbers 1–N.
#include <iostream>

void Loop(){
    int n;
    
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>> n;
    for(int i = 1; i <= n; i++){
        std::cout<< i <<std::endl;
       
    }
}
    int main() {
    
        Loop();
            
        return 0;
    }
    
