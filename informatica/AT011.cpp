#include<iostream>
using namespace std;
int main()
{
    int a,b,i,s=0,semn=1;
    cin>>a;
    cin>>b;
    if(b<0)
    {
        b=-b;
        semn=-semn;
    }
    if(a<0)
    {
        a=-a;
        semn=-semn;
    }
    for(i=1; i<=b; i++)
        s=s+a;
    cout<<s*semn;
}

