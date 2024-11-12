#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    int n,x,i,j,s,c,k,sw=0,nr=0;

    cout<<"Dati numarul: ";     cin>>n;
    if(n%2==1)        x=n/2+1;
    else        x=n/2;
    for(i=1;i<=x;i++)
    {
        j=i; c=0; s=0;
        while(s<n)    {        s=s+j;        j++;        c++;    }
        if(s==n)
         {cout<<"Solutia nr. "<<++nr<<" ";
          for(k=c;k>1;k--)   cout<<j-k<<'+';
          cout<<j-k;
          cout<<endl;
          sw=1;
         }
    }
    if(sw==0)        cout<<"Numarul nu poate fi scris ca suma de numere consecutive";
return 0;}
