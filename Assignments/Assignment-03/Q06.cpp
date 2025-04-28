#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int og_arr[10];

    for (int i = 0; i < 10; i++)
    {
        og_arr[i] = rand() % 20 + 1;
    }

    cout << "Original Array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << og_arr[i] << " ";
    }
    cout << endl;

    for (int i = 9; i >= 0; i--)
    {
        og_arr[i] = og_arr[i - 2];
    }

    og_arr[0] = rand() % 11 + 20;
    og_arr[1] = rand() % 11 + 20;

    cout << "Shifted Array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << og_arr[i] << " ";
    }

    return 0;
}