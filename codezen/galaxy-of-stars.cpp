/*
Completed on: 12/01/2018
By: Sambhav Jain
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main () {

    system("clear");
    int n;
    cin >> n;

    for (int i = 0; i <= n/2; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n/2; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout <<"*";
        }
        cout << endl;
    }


    return 0;
}