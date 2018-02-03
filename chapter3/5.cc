#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string word;

    cout << "Demonstrate reading the standard input one line at a time. \n"
         << "Type 'quit!!!' if you want to end this part of the exercise.\n"
         << "Please enter some input.\n";

    while (word != "quit!!!") {
        getline(cin, word);
        cout << word << '\n';
    }

    word = "";

    cout << "Demonstrate reading the standard input one word at a time. \n"
         << "Type 'quit!!!' if you want to end this part of the exercise.\n"
         << "Please enter some input.\n";
    while (word != "quit!!!"){
        cin >> word;
        cout << word<< '\n';
    }
    
    return 0;
}

