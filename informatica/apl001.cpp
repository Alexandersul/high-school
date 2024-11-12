#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;
/**18 de la I
Afisati toate nr din intervalul a,b care au cifra magica 4 */
int main ()
{
    int a,b,r,n;
    cin>>a;
    cin>>b;
    for(n=a; n<=b; n++)
    {
        r=n%9;
        if(r==4)
            cout<<n<<" ";
    }
}
