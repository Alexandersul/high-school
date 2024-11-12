#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    unsigned int n,t,i,r,c;
    float p,d=0;
    cin>>n;
    cin>>p;
    cin>>t;
    r=t%n;
    c=t/n;
    for(i=1; i<=c; i++)
    {
        d+=n*p;
        p/=2;
    }
    d+=r*p;
    cout<<d;
    return 0;
}
