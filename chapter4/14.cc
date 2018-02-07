//Write code to change the value of a pointer. 
//Write code to change the value to which the pointer points.

#include<iostream>

using std::cout; 
using std::cin;
using std::endl;

int main()
{

    int val = 5, val2 = 10, val3 = 15;
    int *v = &val, *v2 = &val2, *v3 = &val3;

    cout << *v << endl;
    cout << *v2 << endl;
    cout << v << endl;
    cout << v2 << endl;

// changing the value to which the pointer points
    *v = 6;
// changing the value of a pointer (changing address)
    v2 = &val3;

    cout << *v << endl;
    cout << *v2 << endl;
    cout << v << endl;
    cout << v2 << endl;

    return 0;
}
