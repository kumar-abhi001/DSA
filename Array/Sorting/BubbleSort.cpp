#include<iostream>
using namespace std;


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << "Sorted" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {23, 54, 0, 1, 5, 37, 45, 45};
    bubbleSort(arr, 7);
}