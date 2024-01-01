#include<iostream>
using namespace std;
void print(int arr[], int i, int j) {
    while(i<=j) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}
void subString(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            print(arr, i, j);
        }
    }
} 

int main() {
    int arr[] = {1, 2, 3, 4};

    subString(arr, 4);
}