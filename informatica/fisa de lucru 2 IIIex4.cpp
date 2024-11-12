#include<iostream>
using namespace std;
int main()
int sub(int v[100],int n,int a)
{int i,c=0;
for(i=1;i<=n;i++)
if(v[i]==a)
c=c+1;
return c;
}
int main()
{
int v[100],ok=1,n,a,i; /**presupune ca nr sunt distincte*/
cin>>n;
for(i=1;i<=n;i++)
{cin>>v[i];
if(sub(v,n,v[i]>1)
ok=0;


}
if(ok==1)
cout<<"da";
else
cout<<"da";
}
