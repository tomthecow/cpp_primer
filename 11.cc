#include<iostream>
using namespace std;

int main()
{
    int base, power, result;

    cout << "Please enter the base and power: \n";
    cin >> base >> power;

    result = base;
    if (power > 1){
        for (int i = 1; i < power; i++){
            result = base * result;
        }
    }

    if (power == 0){result = 1;}

    cout << result << '\n';

    return 0;
}

