#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    int n,x,y=0,z,i,c=1,k=1;
    cin>>n;
    cin>>x;
    for(i=2; i<=n; i++)
    {
        cin>>z;
        if(x==z)
            {c=c+1;
        if(c>k)

            k=c;
            if(x>y)
                y=x;
        }
        else
            {c=1;
            k=1;}
        x=z;
    }
    cout<<k<<" ";
    cout<<y;

    return 0;
}
