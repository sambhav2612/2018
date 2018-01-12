#include<iostream>
#include<cstring>
using namespace std;

int func1(char *p) {
    return sizeof(p);
}

int func2 (char (&p)[13]) {
    return sizeof(p);
}

int main () {
    char str[] = "Sambhav Jain";
    cout << str << endl << sizeof(str);

    cout << endl << func1(str) << " " << func2(str);

}