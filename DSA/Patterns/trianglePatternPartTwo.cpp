#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }

    /*Output :
    1 
    1 2
    1 2 3
    1 2 3 4
    */

   cout << endl;

    // Reverse Triangle Pattern
    for (int i = 0; i <= n - 1; i++){
        for (int j = i; j >= 0; j--){
            cout << j+1 << " ";
        }
        cout << endl;
    }

    return 0;
}