#include<bits/stdc++.h>
using namespace std;

void switchmonths(int month){
    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
             cout<<"31 Days";
             break;
        case 4: case 6: case 9: case 11:
             cout<<"30 days";
             break;
        case 2:
             cout<<"28 days";
             break;
        default:
             cout<<"Invalid Month";
    }
}
int main(){
    int m;
    cout<<"Enter month (1-12): ";
    cin>>m;
    switchmonths(m);
    return 0;
}
