#include<bits/stdc++.h>
using namespace std;

// PATTERN 14: Increasing Letter Triangle
// A
// A B
// A B C
void pattern14(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// PATTERN 15: Reverse Letter Triangle
// A B C D E
// A B C D
// A B C
void pattern15(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// PATTERN 16: Same Character Triangle
// A
// B B
// C C C
void pattern16(int n) {
    for(int i = 0; i < n; i++) {
        char ch = 'A' + i; 
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter Rows: ";
    cin >> t;
    pattern14(t);
    pattern15(t);
    pattern16(t);
    return 0;
}
