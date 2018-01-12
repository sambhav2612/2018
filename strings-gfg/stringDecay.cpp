#include<iostream>
#include<cstring>
using namespace std;

int func1(string *p) {
    return sizeof(p);
}

int func2 (string p) {
    return sizeof(p);
}

int main () {
    string str = "Sambhav Jain";
    cout << str << endl << sizeof(str);

    cout << endl << func1(&str) << " " << func2(str);

}