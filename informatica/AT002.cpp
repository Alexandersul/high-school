#include <iostream>
using namespace std;
int main()

{
    int n,i,x,maxim=-999999999,minim=999999999;
    cin>>n;
    {
        for(i=1; i<=n; i++)
        {
            cin>>x;
            if(x<minim)
                minim=x;
            if(x>maxim)
                maxim=x;
        }

        cout<<maxim;
        cout<<endl;
        cout<<minim;
    }
}

