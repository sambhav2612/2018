/*
carry out heap sort method
> max-heapify
> build-max-heap
> heap-sort
> heap-insert
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int comparisons = 0;

// max heapify procedure
void max_heapify(int arr[], int index, int size) {
    int largest = index;
    int left  = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size & arr[left] > arr[largest]) {
        largest = left;
        ++comparisons;
    } else {
        largest = index;
        ++comparisons;
    }

    if (right < size & arr[right] > arr[largest]) {
        largest = right;
        ++comparisons;
    }

    if (largest != index) {
        // swap arr[largest] with arr[index]
        swap(arr[largest], arr[index]);

        // call heapify recursively at largest
        max_heapify(arr, largest, size);
    }
}

// procedure for build max heap
void build_max_heap(int arr[], int size) {
    for (int i = size/2 - 1; i >= 0; --i) {
        max_heapify(arr, i, size);
    } 
}

// main procedure for heap sort
void heap_sort(int arr[], int size) {
    // build the max heap first
    build_max_heap(arr, size);

    // as soon as a max heap is formed continue with these procedures:
    for (int i = size-1; i >= 0; --i) {
        // exchange root element with last element 
        swap(arr[0], arr[i]);

        // call max_heapify at 0 with size = i
        max_heapify(arr, 0, i); 
    }
}

int heap_maximum(int arr[]) {
    return arr[0];
}

int heap_extract_max(int arr[], int size) {
    if (size < 1) {
        cout << "Error: heap underflow";
    }
    int max = arr[0];
    arr[0] = arr[size-1];
    size = size - 1;
    max_heapify(arr, 0, size);
    return max;
}

void heap_increase_key(int arr[], int index, int key) {
    if (key < arr[index]) {
        cout << "Error: new key is smaller than the surrent key";
    }
    arr[index] = key;
    while(index > 0 & arr[arr[index/2-1]] < arr[index]) {
        swap(arr[index], arr[arr[index/2-1]]);
        index = arr[index/2-1];
    }
}

void heap_insert(int arr[], int key, int size) {
    size = size - 1;
    arr[size-1] = -32667;
    heap_increase_key(arr, size-1, key);
}

int main () {
    system("clear");

    int arr[] = {0, 12, 3, 45};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << endl << "Unsorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    heap_sort(arr, size);

    cout << endl << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << "Number of comparisons for this procedure: " << comparisons << endl;

    return 0;
}