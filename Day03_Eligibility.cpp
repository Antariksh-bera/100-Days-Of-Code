#include<bits/stdc++.h>
using namespace std;

void checkeligibility(int age)
{
    if (age>=18){
        cout<<"Eligible to vote"<<endl;
    }
    else{
        cout<<"Not Eligible to vote"<<endl;
    } 
}

int main()
{
    int a;
    cout<<"Enter Age of the citizen: ";
    cin>>a;
    checkeligibility(a);
    
    return 0;
}
