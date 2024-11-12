#include<iostream>
using namespace std;
int cinci(int n, int v[100])
{
    int i,c=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    for(i=1; i<=n; i++)
    {
        while(v[i]!=0)
        {
            if(v[i]%10==5)
                c=c+1;
            v[i]=v[i]/10;


        }
    }
    cout<<c;
    return c;
}
int main()
{
    int n,v[100]



    ;
    cinci(n,v);

}
