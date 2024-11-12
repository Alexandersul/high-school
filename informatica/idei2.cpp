#include<iostream>
#include<string.h>
#include<math.h>
#include<fstream>
using namespace std;
int main()
{
    char sir[201];
    int i,c=0,k=1,x=0;
    cin.get(sir,201);
    for(i=1; i<=strlen(sir); i++)
        if((sir[i]!=' ')&&((sir[i+1]==' ')||(sir[i+1]==NULL)))
        x=x+1;
    while(x!=0)
    {for(i=1; i<=strlen(sir); i++)
    {
        if(sir[i]!=' ')
            k=k+1;
        else
            i=strlen(sir)+1;
    }

    if(((sir[1]=='a')||(sir[1]=='e')||(sir[1]=='i')||(sir[1]=='o')||(sir[1]=='u'))&&((sir[k]=='a')||(sir[k]=='e')||(sir[k]=='i')||(sir[k]=='o')||(sir[k]=='u')))
        c=c+1;
    for(i=1; i<=k; i++)

        sir[i]=sir[i+1];
     x=x-1;
    }


    cout<<c;







}
