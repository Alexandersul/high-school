#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    int A=1,B=1,C=1,i,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        B=C*4;
        C=C*2+A;
        A=A*2;
    }
    cout<<A;
    cout<<"A ";
    cout<<B;
    cout<<"B ";
    cout<<C;
    cout<<"C";
    return 0;
}
