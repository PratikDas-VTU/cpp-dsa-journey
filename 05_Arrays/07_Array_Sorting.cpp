#include<iostream>

void sortAscending (int array[] , int size){

    int temp;
    for(int i = 0; i < size -1 ; i++){
        for ( int j = 0; j<size - i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
void sortDecending (int array[] , int size){

    int temp;
    for(int i = 0; i < size -1 ; i++){
        for ( int j = 0; j<size - i - 1; j++){
            if(array[j] < array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int main(){

    int array[] = {5,1,2,3,6,4,8,9,7};

    int size = sizeof(array)/sizeof(int);

    std::cout << " Array Without sorting " << '\n';

    for ( int element : array ){
        std::cout<< element << " ";
    }
    std::cout<< '\n' << " Array After sorting (Ascending Order) " << '\n';

    sortAscending(array,size);
    for ( int element : array ){
        std::cout<< element << " ";
    }
    std::cout<< '\n' << " Array After sorting (Decending Order) " << '\n';

    sortDecending(array,size);
    for ( int element : array ){
        std::cout<< element << " ";
    }

    return 0;
}