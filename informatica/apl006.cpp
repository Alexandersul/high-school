#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;
/***/
int main ()
{
    int n,e=0,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            e=e-i*i;
        else
            e=e+i*i;
    }
    cout<<e;
}
