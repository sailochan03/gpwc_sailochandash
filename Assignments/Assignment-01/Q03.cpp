#include<iostream>

using namespace std;
int x = 1;

void fun(){
    int x = 2;
    {
        int x = 3;
        cout << ::x << endl;
    }
}
int main(){
    fun();
    return 0;
}

// OUTPUT
// 1

/*A variable x with global scope is declared with a value = 1.
Inside fun() a local variable x is declared with value = 2 and 
inside a nester block another local variable x is declared with value = 3.
But while printing the ::x is being printed which is using the global value of x.
:: => Scope resolution Operator
Therefore 1 is being printed instead of 3*/