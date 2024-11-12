#include<iostream>
using namespace std;
int main()
{
    int n,i,x,c=0,y;
    cin>>n;
    cin>>x;
    for(i=1; i<=n-1; i++)
    {
        cin>>y;
        if(y%x==0)
            c=c+1;
        x=y;
    }
    cout<<c;

}
