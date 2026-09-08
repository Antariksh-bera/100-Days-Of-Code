#include<bits/stdc++.h>
using namespace std;

// PATTERN 12: The Number Crown
// 1      1
// 12    21
// 123  321
void pattern12(int n) {
    int space = 2 * (n - 1);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) cout << j;
        
        for(int j = 1; j <= space; j++) cout << " ";
        
        for(int j = i; j >= 1; j--) cout << j;
        
        cout << endl;
        space -= 2; 
    }
}

// PATTERN 13: Floyd's Triangle
// 1
// 2 3
// 4 5 6
void pattern13(int n) {
    int num = 1; 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++; 
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter Rows:  ";
    cin >> t;
    pattern12(t);
    pattern13(t);
    return 0;
}
