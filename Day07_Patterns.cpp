#include<bits/stdc++.h>
using namespace std;

// PATTERN 10: The Half Diamond
// *
// **
// *
void pattern10(int n) {
    for(int i = 1; i <= 2*n - 1; i++) {
        int stars = i; 
        
        if(i > n) stars = 2*n - i;
        
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// PATTERN 11: The Binary Triangle
// 1
// 0 1
// 1 0 1
void pattern11(int n) {
    int start = 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter Rows: ";
    cin >> t;
    pattern10(t);
    pattern11(t);
    return 0;
}
