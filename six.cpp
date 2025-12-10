//Read N and print the sum of numbers from 1 to N.
#include <iostream>
int main(){
int n;
std::cout<<"Enter number: "<<std::endl;
std::cin>> n ;
int res = 0;
for(int i = 0; i <= n; i++){
res += i; // the same as *= from task five.cpp

}
std::cout<< res <<std::endl;
return 0;



}
