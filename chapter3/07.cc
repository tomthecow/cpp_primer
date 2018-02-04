//Write a program to read two strings and report whether
//the strings are equal. If not, report which of the two
//is larger.  Now, change the program to report whether
//the strings have the same length and if not report
//which is longer.

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string first, second;
    string smaller, larger;

    cout << "Please enter the first string: ";
    getline(cin, first);

    cout << "Please enter the second string: ";
    getline(cin, second);


    if (first.compare(second) > 0) {
        cout << "The first string is longer than the second.\n";
    }
    if (second.compare(first) > 0) {
        cout << "The second string is longer than the first.\n"; 
    }
    if (first.compare(second) == 0) {
        cout << "These strings are equal length.\n";
    }

    string::size_type a, b;
    a = first.size();
    b = second.size();

    if (a > b) {
        cout << "The first string is longer than the second.\n";
    }
    if (b > a) {
        cout << "The second string is longer than the first.\n"; 
    }
    if (a == b) {
        cout << "These strings are equal length.\n";
    }

    return 0;
}
