/*
Started on: 27/01/2018
By: Sambhav Jain
You are given a string S consisting of only lowercase alphabets of length at most 100. 
A string T is created by concatenation of k copies of string S. 
Some changes are done to do in string T, such as -
    You can pick a number p and character c and delete the p-th occurrence of character c from the string T
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main () {
    system("clear");
    int delet[] = {0};
    string str;
    string t;
    int k = 0, n = 0, index = 0, count = 0;
    char ch;

    cin >> k >> str;
    for (int i = 0; i < k; ++i) {
        t += str;                       //append t with str, k times
    }
    cin >> n;
    int x = 0;
    while (n-- > 0) {
        cin >> index >> ch;
        for(int i = 0; i < t.length(); ++i) {
            if (t[i] == ch) {
                ++count;
                if (index == count) {   // occurence checker
                    delet[x++] = i;
                    break;              // once deleted exit the loop
                }
            }
        }
        count = 0;
    }

    for (int i = 0; i < x; ++i) {
        t.erase(delet[i], 1);
    }

    cout << t << endl;

    return 0;
}