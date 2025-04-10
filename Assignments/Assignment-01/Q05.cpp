#include <iostream>
using namespace std;

void Cube(double &y){
    y = y * y * y;
}
int main(){
    double g = 4.0;
    Cube(g);
    cout << g << endl;
    return 0;
}

// OUTPUT
// 64

/*The function Cube(double &y) takes a reference to a double variable.
This means any modification inside the function directly affects the original variable.
g is initialized to 4.0. Cube(g) modifies g as 64(cube of 4).
*/