#include<iostream>
using namespace std;
int main()
{
    float p,x,i,n,j,s1=0;
    cin>>n;
    cin>>x;
    if(n==1)
        cout<<x;
        p=x;
    for(i=1; i<=2*n-1; i=i+2)
    {
        s1=s1+p/i;
        p=p*x*x;
    }
    cout<<s1;
}
