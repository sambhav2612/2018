/*
Started on: 11/01/2018
By: Sambhav Jain

*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int array[] = {1, 2, 3, -1, -1, -1, -1};
    int k = 0;
    int sum = 0;
    cin >> k;
    
    for (int i = 2^(k-1)-1; i < 2^k-1; ++i) {
        sum += array[i];
    }

    cout << sum;
    
    return 0;
}