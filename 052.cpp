//Write a function that checks if a number is even.
#include <iostream>
bool isEven(int a){
    return a%2==0;
}
int main () {
    int num;
std::cout<<"Enter number: "<<std::endl;
std::cin>> num;
int result = isEven(num);
if(result == 1){
    std::cout<<"The number is even"<<std::endl;
}else{
    std::cout<<"The number isn`t even"<<std::endl;
}

return 0;
}
