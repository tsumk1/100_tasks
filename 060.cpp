//Function prints n stars.
#include <iostream>

void printStars(int n){
    for(int i = 0; i <= n; i++){
        std::cout<< '*';
    }
}
int main (){
    int len;
    std::cout<<"Enter lenght of line: "<<std::endl;
    std::cin>> len;
    std::cout<<"Result: "<<std::endl;
    printStars(len);
    std::cout<<" "<<std::endl;
   

    return 0;
}