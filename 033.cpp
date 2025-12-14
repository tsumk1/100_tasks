//Count how many zeros are in an array.
#include <iostream>
int main (){
int arr[] = {2, 5, 0, 7, 0, 2, 7, 8 , 0};
int c = 0;
std::cout<<"How many zeros are in an array"<<std::endl;
for (int i = 0; i < 9; i++){
	if(arr [i] == 0){
	c++;
	}

}
	std::cout<<"Zeros in the array: "<< c <<std::endl;
return 0;
}
