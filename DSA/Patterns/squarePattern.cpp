#include<iostream>
using namespace std;

int main(){

    int n = 4;

    // Number pattern
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout << j << " ";
        }
        cout << endl;
    }
    
    /*Output : For Number pattern
    1 2 3 4 5 
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    */ 

   cout << endl;

   for(int i = 0;i<=n-1;i++){
        char ch = 'A';
       for(int j = 0;j<=n-1;j++){
           cout << ch << " ";
           ch++; // A char is always stored in the form of ASCII value - So we can Increment the value 
       }
       cout << endl;
   }

    
    return 0;
}