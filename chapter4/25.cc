//Write a program to compare two strings
//Now write a program to compare the value of two
//C-style character strings

#include<iostream>
#include<cstring>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main () {

    string a, b;

    cout << "Please enter a string: ";
    cin >> a;
    const char *cp1 = a.c_str();

    cout << "Please enter another string: ";
    cin >> b; 
    const char *cp2 = b.c_str();

    if (a.compare(b) == 0)
        cout << "These strings are the same.\n";
    else if (a.compare(b) < 0)
        cout << "The first string is larger than the second. \n";
    else if (a.compare(b) > 0)
        cout << "The first string is shorter than the second. \n";

    if (strcmp(cp1, cp2) == 0)
        cout << "These strings are the same.\n";
    else if (strcmp(cp1, cp2) < 0)
        cout << "The first string is larger than the second. \n";
    else if (strcmp(cp1, cp2) > 0)
        cout << "The first string is shorter than the second. \n";
    

    return 0;
}
