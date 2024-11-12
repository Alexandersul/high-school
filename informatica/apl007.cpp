#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;
/***/
int main ()
{
    int i,n,p;
    float e;
    cin>>n;
    p=1;
    e=0;
    for(i=1; i<=n; i++)
    {
        p=p*i;
        e=e+1.0/p;
    }
    cout<<e;


}
