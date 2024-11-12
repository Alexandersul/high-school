#include<iostream>
using namespace std;
int main()
{
    int c,j,n,i,x,y=0,sw=1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        c=0;
        for(j=1; j<=x; j++)
        {
            if(x%j==0)
                c=c+1;
        }
        if(c==2)
        {
            sw=1;
            if(y<x)
                y=x;
        }
        else
            sw=0;
    }
    if(y!=0)
        cout<<y;
    else
        cout<<"Nu exista";
    }

