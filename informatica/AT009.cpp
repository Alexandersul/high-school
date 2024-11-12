#include<iostream>
using namespace std;
int main()
{
    float n,i,s1=0,a=-1,b=1,c=0,s2=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        s1=a*(s1+i);
        s2=s2+1/s1;
        c=a;
        a=b;
        b=c;

    }
    cout<<s2;
}
