#include<iostream>
#include<string.h>
#include<math.h>
#include<fstream>
using namespace std;
int main()
{char a[256];
int i,j,k,c=0;
cin.get(a,256);
for(i=0;i<=strlen(a);i++)
{if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='u')||(a[i-1]==' '))
for(j=0;j<=strlen(a);j++)
if(a[j]!=' ')
c=c+1;
for(k=c;k>=0;k--)
cout<<a[k];
}
}
