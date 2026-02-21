//Read a number and print "YES" if it belongs to [10; 20], otherwise "NO"
#include <iostream>
int main(){
    int num;
    if(num>=10 && num<=20){
        std::cout<<"YES! It belongs to this interval"<<std::endl;
    }else{
        std::cout<<"NO( It doesn`t belongs to this interval"<<std::endl;
    }

    return 0;
}