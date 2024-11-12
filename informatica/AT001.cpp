#include<iostream>
using namespace std;
int main()
{
    int n,i,x,c;
    c=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x%2==0)
            c=c+1;
    }
    cout<<c;
}






