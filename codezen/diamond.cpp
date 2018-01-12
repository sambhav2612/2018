/*
Completed on: 12/01/2018
By: Sambhav Jain
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main () {

    system("clear");
    int n, i, j, k;
    cin >> n;

    for (i = 0; i <= n/2; ++i) {
        for (j = n/2; j < i; --j) {
            cout << "h";
        }
        for (k = 0; k <= 2*j; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}