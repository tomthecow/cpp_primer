#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){

    const int MULTIPLIER = 2;
    vector<int> ints(10, 1);

    for (vector<int>::iterator i = ints.begin(); i != ints.end(); i++)
        cout << *i << " ";

    cout << "\nAfter multiplier\n";

    for (vector<int>::iterator j = ints.begin(); j != ints.end(); j++){
        *j = *j * MULTIPLIER;
        cout << *j << " ";
    }

    cout << endl;

    return 0;
}
