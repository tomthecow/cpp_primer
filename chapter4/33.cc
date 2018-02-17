//Write a program to copy a vector of ints into an array of ints.

#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {

    const int ary_size = 10;
    
    vector<int> va;
    for (int i = 0; i != ary_size; i++)
        va.push_back(i);

    int a[ary_size];

    for (int i = 0; i != ary_size; i++)
        a[ary_size - 1 - i] = va[i];

    cout << "The output of the vector is: \n";

    for (int i = 0; i != ary_size; i++) 
        cout << a[i] << " ";

    cout << endl;

    return 0;
}
