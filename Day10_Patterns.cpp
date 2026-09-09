#include<bits/stdc++.h>
using namespace std;

// PATTERN 17: Alpha Hill
//    A
//   ABA
//  ABCBA
void pattern17(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        
        for(int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        
        cout << endl;
    }
}

// PATTERN 18: Alpha Triangle
// E
// D E
// C D E
void pattern18(int n) {
    for(int i = 0; i < n; i++) {
        char ch = 'A' + n - 1 - i;
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter Rows: ";
    cin >> t;
    pattern17(t);
    cout << "---" << endl;
    pattern18(t);
    return 0;
}
