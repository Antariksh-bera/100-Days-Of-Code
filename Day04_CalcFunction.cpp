#include<bits/stdc++.h>
using namespace std;

int calculate(int a ,int b, char op){
    if(op=='+')return a+b;
    if(op=='-')return a-b;
    if(op=='*')return a*b;
    if(op=='/'){
        if(b == 0) return 0;
        return a/b;
    }
    return 0;
}

int main(){
    int x,y;
    char o;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    cout<<"Enter a arithmatic operator: ";
    cin>>o;
    int total=calculate(x,y,o);
    cout<<"The Answer is: "<<total;
    return 0;
}