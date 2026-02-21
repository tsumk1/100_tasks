//Read three sides and check if they can form a triangle.
#include <iostream>
int main(){
    int a, b, c;
    std::cout<<"Enter a side: ";
    std::cin>> a;

    std::cout<<"Enter b side: ";
    std::cin>> b;

    std::cout<<"Enter c side: ";
    std::cin>> c;

    std::cout<<"-------------------------------"<<std::endl;

    if(a+b>c && a+c>b && b+c>a){
        std::cout<<"They can form a triangle"<<std::endl;
    }else{
        std::cout<<"They can`t form a triangle"<<std::endl;
    }
    return 0;
}