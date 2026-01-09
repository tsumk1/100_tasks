//Read N numbers and print only the even ones.

#include <iostream>
int main () {
int n;
int count = 0;
std::cout<<"Enter the size of the array (how many numbers it will contain):"<<std::endl;
std::cin>> n;
 int arr[n];
 int even[n];
 std::cout<<"Enter numbers with space: "<<std::endl;
 for(int i = 0; i<=n-1; i++){
	 std::cin>> arr[i];
	 
	 if(arr[i]%2==0){
		  even[count] = arr[i];
		  count++;
	 }
}
std::cout<< "Even numbers: "<<std::endl;
for(int i = 0; i < count; i++){
	std::cout<< even[i]<< ""<<std::endl;
}


 return 0;

}
