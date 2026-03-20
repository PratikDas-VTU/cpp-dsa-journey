#include<iostream>

int main(){

    std ::string students[] = {"Spongebob", "Patrick", "Squidward"};
    char grades[] = {'A','B','C','D'};

    for(std ::string student : students){
        std ::cout << student << '\n';
    }
    for(char grade : grades){
        std ::cout << grade << '\n';
    }


    return 0;
}