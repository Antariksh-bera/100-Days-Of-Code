#include<bits/stdc++.h>
using namespace std;

// PATTERN 1: The Square
// *****
// *****
void pattern1(int n){
    for(int i=0;i < n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// PATTERN 2: The Right Triangle
// *
// **
// ***
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// PATTERN 3: The Numbered Triangle
// 1
// 1 2
// 1 2 3
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// PATTERN 4: The Inverted Triangle
// *****
// ****
// ***
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// PATTERN 5: Row Number Triangle
// 1
// 2 2
// 3 3 3
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int r;
    cout<<"Enter number of rows: ";
    cin>>r;
    pattern1(r);
    pattern2(r);
    pattern3(r);
    pattern4(r);
    pattern5(r);
    return 0;
}