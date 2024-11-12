#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;
/***/
int main ()
{
    int a,b,c,x;
    cin>>x;
    a=1;
    b=1;
    if(x==1)
        cout<<"da";
    else
    {
        do
        {
            c=a+b;
            a=b;
            b=c;

        }
        while(c<x);
        if(c==x)
            cout<<"da";
        else cout<<"nu";
    }






}
