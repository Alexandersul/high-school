#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    int n,s=0,i,a=0,b=0,x,y;
    cin>>n; cin>>x; cin>>y;
    if(a>=x)
        s=s+y;
    a=x;
    b=y;
    for(i=1; i<n; i++)
    {
        cin>>x; cin>>y;
        if(a>=x)
            s=s+y;
        else
            i=n;
        a=x;
        y=b;
    }
    cout<<s;
    return 0;
}
