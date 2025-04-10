#include <iostream>
using namespace std;

int x[100];
int main(){
    cout << x[99] << endl;
}

// OUTPUT
// 0

/*The array x[100] is declared as a global variable (outside main).
In C++, global variables (as well as static variables) are automatically initialized to zero if not explicitly assigned a value.
The program accesses x[99], which is the last element of the array.
Since x is globally defined and uninitialized, all elements of x are set to 0 by default.
*/