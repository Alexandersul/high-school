#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    int n,i=1,j=2,,k=1;
    cin>>n;
    while(i<n)
    {
        i=i+j;
        j++;
    }
    j++;
    k=i+1-j;
    cout<<"A-"; cout<<i-n+1;
    cout<<"B-"; cout<<n-k+1;
    return 0;
}
