#include<iostream>
using namespace std;

void myfun(int i, int &k){
    i = 1;
    k = 2;
}
int main(){
    int x = 0;
    myfun(x, x);
    cout << x << endl;
    return 0;
}

// OUTPUT
// 2

/*In the myfun(i, &k) i is passed by value but k is passed by reference.
So i will make a copy while k can modify the original value. When x = 0 is initialized in the main function, 
and myfun(x, x) is called then the i = x make a copy of x, but when i = k is passed then value of x is modified.
Since k is passed by reference therefore the value of x is updated to the value of k that is 2.
Which is the final output x = 2 */