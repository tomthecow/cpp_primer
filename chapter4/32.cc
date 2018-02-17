//Write a program to initilize a vector from an array of ints

#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {

    const int ary_size = 10;
    int a[ary_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> va;

    for (int i = ary_size - 1; i != -1; i--){
        va.push_back(a[i]);
    } 

    cout << "The output of the vector is: \n";

    for (int i = 0; i != ary_size; i++) {
        cout << va[i] << " ";
    }

    cout << endl;

    return 0;
}
