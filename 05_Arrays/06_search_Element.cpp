#include<iostream>

int indexSearch(int numbers[],int size, int search){
    for(int i = 0 ; i<size;i++){

        if(numbers[i]==search){
            return i;
        }
    }
    return -1;
}
int main(){


    int numbers[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int search;

    std::cout << "Enter a number to search : ";
    std::cin >> search;

    index = indexSearch(numbers,size,search);

    if(index != -1){
        std::cout << search << " is at index " << index;
    } else {
        std::cout << "Number is not present !!";
    }

}