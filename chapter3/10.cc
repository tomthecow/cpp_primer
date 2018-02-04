#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string input, concat_str;

    cout << "Please enter strings: \n";
    getline(cin, input);

    int i = 0;
    while (input[i]){
        if (ispunct(input[i]) == 0){
            concat_str += input[i];
        }
        i++;
    }

    cout << "The string without punctuation is "
        << concat_str << endl;

    return 0;
}
