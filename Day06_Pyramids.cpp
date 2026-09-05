#include<bits/stdc++.h>
using namespace std;

// PATTERN 7: The Star Pyramid
//    *
//   ***
//  *****
void pattern7(int n) {
    for(int i=n;i>0;i--){
        
        for(int j=0;j<i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<(n-i)*2+1;j++){
            cout<<"*";
        }

        
        for(int j=0;j<i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

// PATTERN 8: The Inverted Pyramid
// *********
//  *******
//   *****
//    ***
//     *
void pattern8(int n){
    for (int i = n; i>0 ; i--){

        for (int j=0;j<n-i;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }

        for (int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}

// PATTERN 9: The Diamond
//    *
//   ***
//  *****
//  *****
//   ***
//    *
void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}

int main(){
    int r;
    cout<<"Enter number of rows: ";
    cin>>r;
    pattern7(r);
    pattern8(r);
    pattern9(r);
    return 0;
}