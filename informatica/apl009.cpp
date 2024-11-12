#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;
/***/
int main ()
{
    int i,j,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            cout<<2*j<<" ";
        cout<<endl;
    }

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j=j)
            cout<<j<<" ";
        cout<<endl;
    }


}
