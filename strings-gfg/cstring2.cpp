#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string str = "";

    getline(cin, str);
    cout << str;

    str.push_back('X');
    cout << endl << str;
    
    str.pop_back();
    cout << endl << str;

    cout << endl << str.capacity();

    string::iterator it;
    string::reverse_iterator itt;

    // string traverse - front
    cout << endl;
    for (it = str.begin(); it < str.end(); ++it) {
        cout << *it;
    }

    // string traverse - back
    cout << endl;
    for (itt = str.rbegin(); itt < str.rend(); ++itt) {
        cout << *itt;
    }

    // character swap implementation using iterators
    string str2 = str;
    for (it = str2.begin(), itt = str2.rbegin(); it < str2.end(), itt < str2.rend(); ++it, ++itt) {
        *it = *itt;
        cout << *it;
    }

    // swap using inbuilt functions
    string str3 = str;
    string str4 = str2;
    str3.swap(str4);

    cout << endl << str3 << endl << str2 << endl << str;

    return 0;
}