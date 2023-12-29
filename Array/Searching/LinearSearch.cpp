#include<iostream>
using namespace std;

//linear search on array

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if(arr[i] == key)
            return i;
    }

    return -1;
}
int main() {

    int arr[] = {10, 11, 23, -1, 5, 7, 89};
    int num = 11;
    int index = linearSearch(arr, 7, num);
    cout << num << " is at " << index; // output: 11 is at 1
    return 0;
}