#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    float R,L,n,i;
    cin>>R;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cout<<R;
    cout<<" ";
        L=R*sqrt(2);
    cout<<L;
    R=L/2;
    cout<<endl;
    }
return 0;
}
