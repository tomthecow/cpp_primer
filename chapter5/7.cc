//Write the condition for a while loop that would read 
//ints from the standard input and stop when the value 
//read is equal to 22. 

#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    
    vector<int> ints;
    int input_int;

    cout << "Please enter some ints.\n"
        << "This will stop when you enter 42.\n";

    cin >> input_int;

    while (input_int != 42){
        ints.push_back(input_int);
        cin >> input_int;
    }

    return 0;
}
