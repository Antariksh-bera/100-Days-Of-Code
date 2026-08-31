#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Age: ";
    cin>>age;
    if (age>=18)
    {
         cout<<"You are an adult";
    }
    else if(age<18)
    {
        cout<<"Yow are not an Adult";
    }
    return 0;  
}