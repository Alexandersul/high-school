#include<iostream>
using namespace std;
int main()
{
    float n,i,s=0;
    cin>>n;
    for(i=1; i<=2*n-2; i=i+2)
    {
        s=s+1/i;
    }
    cout<<s;
}
