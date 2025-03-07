#include<iostream>

using namespace std;
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int i = 0, j = 1;
    swap(i, j);
    cout << i << " " << j << endl;
}

// OUTPUT
// 1 0

// the value of i and j is swapped using a temp variable and this is carried out by the swap method