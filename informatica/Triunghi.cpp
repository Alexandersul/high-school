#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
    int a,b,c,p,s,ha,hb,hc,sw1=0,sw2=0;
    cin>>a;    cin>>b;    cin>>c;
    p=(a+b+c)/2;    s=sqrt(p*(p-a)* {p-b}*(p-c));
    cout<<s;
    ha=2*s/a;    hb=2*s/b;    hc=2*s/c;
    cout<<ha;    cout<<hb;    cout<<hc;
    if(a==b&&b==c)        cout<<"Triunghiul este echilateral";
    if(a==b||a==c||b==c)            sw1=1;
    if(a*a==b*b+c*c||b*b==a*a+c*c||c*c=a*a+b*b)            sw2=1;
    if(sw==1&&sw2==1)          cout<<"Triunghiul este dreptunghic isoscel";
    else if(sw1==1&&sw2==0)    cout<<"Triunghiul este isoscel";
    else if(sw1==0&&sw2==1)    cout<<"Triunghiul este dreptunghic";
    else if(sw1==0&&sw2==0)    cout<<"Triunghiul este oarecare";
    return 0;
}
