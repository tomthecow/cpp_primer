//Read a set of integers into a vector. Calculate and print 
//the susm of the each paif oadjacent elements in the vector.
//If there is an odd number, tell the user and print the value
//of the last elemtn without summing it.  Now change your 
//program so that it prints the sum of the first and last
//elements, followed by the sum of the second and second-
//to-last and so on.

#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

vector<int> int_input_receiver(vector<int> A){
    int input;

    do {
        cout << "Please enter a non-zero integer: " ;
        cin >> input; 
        A.push_back(input);
    } while (input != 0);
        
    return A;
}

int main()
{
    vector<int> ints, adj_sums, oppo_sums;

    ints = int_input_receiver(ints);

    int total_sum = 0, sum_before_odd = 0;
    bool odd_flag = 0;
    int odd_num;

    for (int i = 0; i < ints.size() - 1; i++){
        total_sum += ints[i];

        if (ints[i] % 2 == 1) {
            odd_flag = 1;
            odd_num = ints[i];
        }

        if (odd_flag == 0)
            sum_before_odd += ints[i];

        if (i != 0)
            adj_sums.push_back(ints[i] + ints[i-1]);

        if (i < ((ints.size() - 1) / 2))
            oppo_sums.push_back(ints[i] + ints[ints.size()-2-i]); 
    }

    cout << "The overall sum was " << total_sum << '\n';
    
    if (odd_flag == 1){
        cout << "There was an odd number. "
            << "The number was " << odd_num << '\n'
            << "The sum before the odd number was " << sum_before_odd << ".\n";
    }

    if (adj_sums.empty() == 0){
        cout << "Sums of adjacent elements in the vector: \n";
        for (int i = 0; i < adj_sums.size(); i++)
            cout << adj_sums[i] << " ";

        cout << endl;
    }

    if (oppo_sums.empty() == 0){
        cout << "Sums of opposite elements in the vector: \n";
        for (int i = 0; i < (oppo_sums.size()); i++)
            cout << oppo_sums[i] << " ";
        cout << endl;
    }

    return 0;
}
