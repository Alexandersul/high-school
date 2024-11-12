#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

/***/

int main()
{
    char s[101],c[101],aux[101];
    int i,x;
    cin>>c;
   for(i=0;i<strlen(c);i++)
   if(c[i]=='2'||c[i]=='4'||c[i]=='6'||c[i]=='8')
   {
   aux[i]=c[i];
   strcpy(c+i,c+i-1);
   c[i]=aux[i];
   }
   for(i=0;i<strlen(c);i++)
    cout<<c[i];


    return 0;
}
