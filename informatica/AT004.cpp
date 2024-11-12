#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0,x,c=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x>0)
        {
            s=s+x;
            c=c+1;

        }
    }

    cout<<s*1.0/c;/**couut<<(float)s/c; */

}
