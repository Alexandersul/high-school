#include<iostream>
#include<string.h>
#include<math.h>
#include<fstream>
using namespace std;
int main()
{
    char sir[50];
    int i,j,v[10]= {0},c=0,n;
    cin.get(sir,50);
    n=strlen(sir);
    for(i=0; i<=n; i++)
    {if(sir[i]='0')
            v[0]=v[0]+1;
    if(sir[i]='1')
        v[1]=v[1]+1;
    if(sir[i]='2')
        v[2]=v[2]+1;
    if(sir[i]='3')
        v[3]=v[3]+1;
    if(sir[i]='4')
        v[4]=v[4]+1;
    if(sir[i]='5')
        v[5]=v[5]+1;
    if(sir[i]='6')
        v[6]=v[6]+1;
    if(sir[i]='7')
        v[7]=v[7]+1;
    if(sir[i]='8')
        v[8]=v[8]+1;
    if(sir[i]='9')
        v[9]=v[9]+1;}
        for(j=0;j<=9;j++)
            cout<<v[j];





}
