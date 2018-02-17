//Write a program to concatenate two C-style string literals,
//putting the result in a C-style string. Write a program to
//concatenate two library strings that have the save value 
//as the literals used in the first program. 

#include<iostream>
#include<string>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

    char str1[] = "Hello ", str2[] = "World!";
    const size_t len1 = strlen(str1) , len2 = strlen(str2);
    char cat_str[len1 + len2];

    for (int i = 0; i != len1 + 1; i++){
        cat_str[i] = str1[i];
    }

    for (int i = 0; i != len2 + 1; i++){
        cat_str[i+len1] = str2[i];
    }

    cout << "The concatenated c string is " << cat_str << endl;
    
    string stra = "Hello ", strb = "World!";
    stra = stra + strb;
    cout << "The concatenated string is " << stra << endl;

    return 0;
}
