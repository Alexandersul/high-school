#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{   long m,n,c=0,r,D,I;
    cin>>m;    cin>>n;
    D=m; I=n;
    while(I)    {        r=m%I;    D=I;    I=r;    }
    I=n/D;    D=m/D;
    while(I!=1 && D!=1)
    if(D>I){c++; D=D%I;}
    else {c++; I=I%D;}
    if(I==1)    cout<<c+D;
    else        cout<<c+I;
    return 0;}
