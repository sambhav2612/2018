/*
Completed on: 11/01/2018
By: Sambhav Jain
Given a String S, you have to find and return how many integer it has like string "aaab1122cc33ccdd" it has 2 integer which is 1122 and 33.
*/

#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;
int main() {
    string S;
    int count = 0;
    getline(cin, S);
    
    for (int i = 0; i < S.length(); ++i) {
        if (isdigit(S[i])) {
            ++count;
            while (isdigit(S[i])) {
                ++i;
            }
        }
    }
    
    cout << count;
}
