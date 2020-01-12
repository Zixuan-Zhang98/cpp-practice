#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n);
void insertionSort(int *arr, int n);
void swap(int *arr, int i, int j);

int main() {
    int arr[] = {23,34,2,3,5,12,42,56,89,8};
    // insertionSort(arr, 10);
    // cout << sizeof(arr) << endl;
    bubbleSort(arr, 10);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
}

void insertionSort(int *arr, int n) {
    // int len = sizeof(arr) / sizeof(*arr);
    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
        {
            swap(arr, j, j + 1);
        }
    }
}

void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
        {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr, j, j + 1);
            }
        }
        
    }
}

void swap(int *arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}