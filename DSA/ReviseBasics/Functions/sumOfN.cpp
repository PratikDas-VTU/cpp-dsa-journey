#include<iostream>
using namespace std;

int sumOfN(int num){

    int sum=0;
    for(int i = 0;i<=num;i++){
        sum +=i;
    }

    return sum;
}
int main(){

    int n = 15;
    

    cout << "The sum is:"<< sumOfN(n);
    cout << "\nThe sum is:"<< sumOfN(20);
    cout << "\nThe sum is:"<< sumOfN(120);
    return 0;
}