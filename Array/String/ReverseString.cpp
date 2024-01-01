#include<iostream>

using namespace std;

string reverseString(string st) {

    int length = st.length();
    int i = 0, j = length - 1;
    while(i < j) {
        swap(st[i], st[j]);
        i++;
        j--;
    }

    return st;
}
int main() {
    string st;
    cout << "Enter your name" << endl;
    cin >> st;

    cout << reverseString(st);
}