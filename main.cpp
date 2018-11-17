#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rev(char arr[],int lower,int upper)
{
    if(lower<upper){
        swap(arr[lower],arr[upper]);
        rev(arr,lower+1,upper-1);
    }
}

void rev(char arr[])
{
    int upper=strlen(arr),lower=0;
    rev(arr,lower,upper);
}

int main()
{
    int upper,lower;
    char x[]="Ahmed";
    int y=strlen(x);
    rev(x,1,4);
    for(int i=0;i<y;++i){
        cout<<x[i];
    }
     cout<<endl;
     a:
    cin >>lower>>upper;
    if (upper>y)
    {
        cout<<"this size is very big !!"<<endl;
        goto a;
    }
    cout<<endl;
    rev(x);
    for(int i=1;i<y+1;++i){
        cout<<x[i];
    }
}
