//Read 5 numbers into an array and print them

#include <iostream>
int main() {
int arr[5];
 
std::cout<< "Enter five numbers with space: "<<std::endl;
for(int a = 0; a <=4 ; a++){
	std::cin>> arr[a];	
}


std::cout<<"Your array contains: "<<std::endl;
for(int a = 0; a <=4; a++){
	std::cout<< arr[a]<<" ";
	
}

std::cout<<'\n';

return 0; 
}
