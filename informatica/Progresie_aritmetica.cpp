#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
int a,b,r,sw=1;
cin>>a;
cin>>b;
r=a-b;
a=b;
while(b!=-1)
{
    cin>>b;
    if(a-b!=r) sw=0;
    a=b;
}
if(sw==1)
    cout<<"Sirul dat este o progresie aritmetica";
else
    cout<<"Sirul dat nu este o progrsie aritmetica";
return 0;
}
