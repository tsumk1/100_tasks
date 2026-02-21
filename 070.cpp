//Read a number (1–7) and print the weekday name. But using arrays. 
#include <iostream>
#include <string>
int main(){
    int day;
    std::string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    std::cout<<"Enter the day number: ";
    std::cin>> day;
    std::cout<<"-------------------------------------"<<std::endl;

    if(day>=1 && day<=7){
        std::cout<<days[day - 1]<<std::endl;
    }else{
          std::cout<<"There are only 7 days in a week."<<std::endl;
    }

    return 0;
}
