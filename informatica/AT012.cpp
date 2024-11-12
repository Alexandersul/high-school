#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=3*n-3; j=j+3)
        {
            cout<<j<<" ";
            cout<<endl;
        }

    }

}
