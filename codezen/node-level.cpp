/*
Started on: 27/01/2018
By: Sambhav Jain
Given a binary tree having N nodes and an integer M you have to return the level of node M.
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    system("clear");
    int array[] = {0};
    int x = 0, i = 0;
    cin >> x;
    while (x != 32567) {
        array[i++] = x;
        cin >> x;
    }
    int size = i;
    int m = 0, level = 0;
    cin >> m;
    for (int i = 0; i < size; ) {
        for (int j = i; j < pow(2,i); ++j) {
            if (array[j] == m) {
                level = i+1;
                break;
            }
        }

        i += pow(2,i); 
    }
    return 0;
}