#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;
/***/
int main()
{
    int x,s=0,p=1,y;
    cin>>x;
    y=x;
    while(x!=0)
    {
        if((x%10)%2==1)
            s=s+x%10;
        else
            p=p*x%10;
        x=x/10;
    }
    while(y>9)
        y=y/10;

    if(s%y==p%y)
        cout<<"CORECT";
    else
        cout<<"INCORECT";
    return 0;
}
