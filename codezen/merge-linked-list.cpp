#include <iostream>
#include <cstdlib>
using namespace std;

int inputArray(int arr[]) {
    int x = 0, i = 0;
    cin >> x;
    while (x) {
        arr[i++] = x;
        cin >> x;
        if(x == -1) {
            break;
        }
    }
    return i;
}

int main () {
    system("clear");
    int list1[] = {0}, list2[] = {0};
    int merge[] = {0};
    int size = 0;
    int size1 = inputArray(list1);
    int size2 = inputArray(list2);

    int i = size1-1, j = size2-1, k = 0;

    while (i > 0 & j > 0) {
        if (list1[i] > list2[j]) {
            merge[k++] = list1[i--];
        } else {
            merge[k++] = list2[j--];
        }
    }
    // if list1 was bigger (list2 ended first)
    while (i > 0) {
        merge[k++] = list1[i--];
    }
    // if list2 was bigger (list1 ended first)
    while (j > 0) {
        merge[k++] = list2[j--];
    }
    size = k;

    for (int i = 0; i < k; ++i) {
        cout << merge[i] << " ";
    }

    return 0;
}