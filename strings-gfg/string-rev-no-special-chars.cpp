#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;

int main() {
    string main, temp;
    cout << endl << "Enter a string with immutable special characters:// ";
    getline(cin, main);

    for (int i = 0; i < main.length(); ++i) {
        if ((isalpha(main[i]))) {
            temp[i] = main[i];
        }
    }

    cout << endl << "Only character string found:// " << temp << endl;

    return 0;
}