//Read a month number (1–12) and print the season.
#include <iostream>

int main(){
    int mon;
    std::cout<<"Enter the number of month: ";
    std::cin>> mon;
    std::cout<<"-------------------"<<std::endl;

    if(mon==12 || mon==1 || mon==2){
        std::cout<<"It`s winter"<<std::endl;
    }else if(mon==3 || mon==4 || mon==5){
        std::cout<<"It`s spring"<<std::endl;
    }else if(mon==6 || mon==7 || mon==8){
        std::cout<<"It`s summer"<<std::endl;
    }else if(mon==9 || mon==10 || mon ==11){
        std::cout<<"It`s autumn"<<std::endl;
    }else{
        std::cout<<"There are only 12 months in a year."<<std::endl;
    }
    
    return 0;
}
