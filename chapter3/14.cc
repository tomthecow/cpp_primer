//read some text into a vector, storing each word in the input as
//an element in the vector. Transform each word into uppercase 
//letters. Print the transformed elements from the vector, 
//printing eight words to a line. 


#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> input;
    string n;
    bool output_flag = 0, input_flag = 0;

    cout << "Please enter some text.\n"
        << "Hit ctrl-d to end input\n";
    while(cin >> n){
        input.push_back(n);
    }

    if (input.empty() == 0) {
        for (int i = 0; i != input.size(); i++){
            if(input_flag == 0){
                cout << "\nYour input was: \n";
                input_flag = 1;
            }
            cout << input[i] << " " ;
        }
        
        cout << "\n\nContents in uppercase: \n";

        for (int i = 0; i != input.size(); i++){
            if (output_flag == 0){
                output_flag = 1;
                cout << "Output : ";
            }
        
            int j = 0;

            while(input[i][j]){
                char a = toupper(input[i][j]);
                cout << a;
                j++;
            }
            cout << " ";
        }

        cout << endl;

    }

    return 0;
    
    
}
