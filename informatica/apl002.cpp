#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;
/***/
int main ()
{
    int n,p,u; ///p - penultim; u - ultim /
    cin>>n;
    while(n!=0)
    {
        if(n%2!=0)
        {
            p=u;
            u=n;
        }
        cin>>n;
    }
    cout<<p;
}
