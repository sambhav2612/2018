#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char main[26] = {'0'};
    bool mark[26] = {false};
    int index = 0;

    for (int i = 0; i < strlen(main); ++i) {
        cin >> main[i];
    }

    for (int i = 0; i < strlen(main); ++i) {
        if (main[i] >= 'a' & main[i] <= 'z') {
            index = main[i] - 'a';
        } else if (main[i] >= 'A' & main[i] <= 'Z') {
            index = main[i] - 'A';
        }
        mark[index] = true;
    }

    int flag = 0;

    for (int i = 0; i < 26; ++i) {
        if (mark[i] == false) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << "not a pangram";
    } else {
        cout << "a pangram";
    }
}