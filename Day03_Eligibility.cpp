#include<bits/stdc++.h>
using namespace std;

void checkeligibility(int age)
{
    if (age>=18){
        cout<<"Eligible"<<endl;
    }
    else{
        cout<<"Not Eligible"<<endl;
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
