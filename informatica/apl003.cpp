#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;
/***/
int main ()
{
    int n,ogl,copie,max=0,sw=1;
    cin>>n;

    while(n!=0)///cat timp nu s-a ajuns la sf sir
    {
        copie=n;ogl=0;
        while(n!=0)/// cat timp nr mai are cifre
        {
            ogl=ogl*10+n%10;
            n=n/10;
        }
        if(ogl==copie)

            if(copie>max)
                max=copie;

    cin>>n;
    }


if(max==0)
    cout<<"Nu exista";
else
    cout<<max;
}
