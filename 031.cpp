//Find the largest element of an array of size 5.
#include <iostream>

int main() {
    int arr[5];
    std::cout<<"Enter 5 digits using enter: "<<std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout <<"     \nThe largest element of an array : "<< max << std::endl;
    return 0;
}
