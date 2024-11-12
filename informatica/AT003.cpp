#include<iostream>
using namespace std;
int main()
{
    int n,i,y=0,x;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x%2==0)
        {
            if(y<x)
                y=x;
        }
    }
    cout<<y;
}
