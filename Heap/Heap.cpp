#include<iostream>
using namespace std;

// MAX-HEAP
class Heap {
    public:

    int arr[100];
    int size;
    Heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size += 1;
        int index = size;

        arr[index] = val;

        

        while(index > 1) {
            int parent = index / 2;

            if(arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }


};

int main() {

    Heap h1;
    cout << "Data of heap" << endl;
    h1.insert(50);
    h1.insert(60);
    h1.insert(80);
    h1.insert(4);
    h1.insert(-56);
    h1.print();
    return 0;
}