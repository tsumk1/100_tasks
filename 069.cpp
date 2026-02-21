//Read a number (1–7) and print the weekday name.
#include <iostream>

int main(){
    int day;
    std::cout<<"Enter the number of the day: ";
    std::cin>> day;
    std::cout<<"--------------------------"<<std::endl;

    if(day==1){
        std::cout<<"Monday"<<std::endl;
    }else if(day==2){
        std::cout<<"Tuesday"<<std::endl;
    }else if(day==3){
        std::cout<<"Wednesday"<<std::endl;
    }else if(day==4){
        std::cout<<"Thursday"<<std::endl;
    }else if(day==5){
        std::cout<<"Friday"<<std::endl;
    }else if(day==6){
        std::cout<<"Saturday"<<std::endl;
    }else if(day==7){
        std::cout<<"Sunday"<<std::endl;
    }else{
        std::cout<<"There are only 7 days in a week."<<std::endl;
    }

    return 0;

}