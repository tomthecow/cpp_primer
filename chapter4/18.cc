//Write a program that uses pointers to set the elements in an array of 
//ints to zero.

#include<iostream>

using std::endl;
using std::cout;

int main(){

    const size_t ary_size = 5;
    const int ary_values = 0;
    int ary[ary_size];

    int *p = ary;

    for (int i = 0; i != ary_size; i++){
        *p = ary_values;
        p++;
    }

    for (int i = 0; i != ary_size; i++){
        cout << ary[i] << endl;
    }

    return 0;
}
