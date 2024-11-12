#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    int n,m,i,j,a[11][11],k=1;
    cin>>n;
    cin>>m;
    if(n%2==0)
    {
        for(k=1; k<=n/2; k++)
            for(i=0; i<=n/2; i++)
                for(j=0; j<m; j++)
                    a[i][j]=k;
        for(k=n/2; k>=1; k--)
            for(i=n/2+1; i<n; i++)
                for(j=0; j<m; j++)
                    a[i][j]=k;
    }
    else
    {
        for(k=1; k<=n/2+1; k++)
            for(i=0; i<n/2+1; i++)
                for(j=0; j<m; j++)
                    a[i][j]=k;
        for(k=n/2-1; k>=1; k--)
            for(i=n/2+1; i<n; i++)
                for(j=0; j<m; j++)
                    a[i][j]=k;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
