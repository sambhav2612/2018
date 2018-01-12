#include<iostream>
#include<string.h>
using namespace std;

int main () {
    string main = "";
    cin >> main;

    //sorting
    for (int i = 0; i < main.length()-1; ++i) {
        for (int j = i+1; j < main.length(); ++j) {
            if (main[i] >= main[j]) {
                char temp = main[i];
                main[i] = main[j];
                main[j] = temp;
            }
        }
    }

    string temp = "";
    int k = 0;
    for (int i = 1; i < main.length(); ++i) {
        temp[k++] = main[i-1];
        if(main[i-1] != main[i]) {
            temp[k] = main[i];
        }
    }

    cout << temp << endl;

    cout << main << endl;

    return 0;
}