#include<bits/stdc++.h>
using namespace std;

int calculatetotal(int regularvotes,int postalvotes)
{
    int total=regularvotes+postalvotes;
    return total;
}

int main()
{
    int finalcount=calculatetotal(150,50);
    cout<<"Total vote casts are: "<<finalcount<<endl;
    return 0;
}
