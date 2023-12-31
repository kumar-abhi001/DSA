#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int pos = i;
        for (int j = i - 1; j >= 0; j--) {
            if(temp < arr[j]) {
                arr[j + 1] = arr[j];
                pos = j;
            }
        }
        arr[pos] = temp;
    }

    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main() {
    int arr[] = {1, 23, 45, 6, 4, 56, -2};
    insertionSort(arr, 7);

    return 0;
}