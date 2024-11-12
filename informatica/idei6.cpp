#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    int n,m,i,j, a[10][10], b[10][10];
    cin>>n;
    cin>>m;
    for(i=0 ; i<n ; i++)
        for(j=0 ; j<m ; j++)
            cin>>a[i][j];
    for(i=0 ; i<n ; i++)
        for(j=0 ; j<m ; j++)
            b[i][j]=a[j][i];
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
