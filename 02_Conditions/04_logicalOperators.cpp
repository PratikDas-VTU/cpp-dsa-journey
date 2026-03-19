#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 0;

    // Logical AND (&&)
    if (a > 5 && b > 2) {
        cout << "Logical AND (&&): Both conditions are TRUE" << endl;
    } else {
        cout << "Logical AND (&&): At least one condition is FALSE" << endl;
    }

    // Logical OR (||)
    if (a > 15 || b > 2) {
        cout << "Logical OR (||): At least one condition is TRUE" << endl;
    } else {
        cout << "Logical OR (||): Both conditions are FALSE" << endl;
    }

    // Logical NOT (!)
    if (!c) {
        cout << "Logical NOT (!): c is FALSE (0), so !c is TRUE" << endl;
    } else {
        cout << "Logical NOT (!): c is TRUE" << endl;
    }

    // Combined Example
    if ((a > 5 && b < 10) || !c) {
        cout << "Combined condition is TRUE" << endl;
    } else {
        cout << "Combined condition is FALSE" << endl;
    }

    return 0;
}