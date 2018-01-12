/*
Started on: 11/01/2018
Completed on: 12/01/2018
By: Sambhav Jain

To edit just change the content of the array with the max value of k allowed

*/
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int array[] = {1, 2, 3, -1, -1, -1, -1};
    int k = 0;
    int sum = 0;
    cin >> k;
    
    if (k < 3) {
        for (int i = pow(2,k-1)-1; i < pow(2,k)-1; ++i) {
            sum += array[i];
        }
    }
    cout << sum << endl;
    
    return 0;
}