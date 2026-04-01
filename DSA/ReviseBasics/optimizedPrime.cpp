#include<iostream>
using namespace std;
int main(){

    int num = 3;
    bool isPrime = true;

    for ( int i = 2; i*i<=num;i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << "Given Number is Prime\n";
    } else {
        cout << "Given Number is not Prime\n";
    }

    return 0;
}