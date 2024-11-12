#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    int x=1,i,c=0,k=0,n;
    cin>>n;
    while(k<n)
    {
        for(i=1; i<=x; i++)
        if(x%i==0) c++;
        if(c==2&&x%10==7) k++;
        c=0;
        x++;
    }
    cout<<x-1;
    return 0;
}
