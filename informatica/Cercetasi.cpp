#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    int N1,D1,N2,D2,G,S,x,aux,y;
    cin>>D1;
    cin>>N1;
    cin>>D2;
    cin>>N2;
    G=D1*N1;
    S=D2*N2;
    if(S<G) aux=S;
    else aux=G;
    for(x=1; x<=aux; x++) y=x;
    G=G/x;
    S=S/x;
    cout<<"Numarul de cercetasi din fiecare detasament este:";
    cout<<x;
    cout<<"Numarul de cercetasi din Galaciuc este:";
    cout<<G;
    cout<<"Numarul de cercetasi din Soveja:";
    cout<<S;
    return 0;
}
