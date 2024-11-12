#include<iostream>
using namespace std;
int main()
{int i,n,j,s=0,p=1,x=1;
cin>>n;
for(i=1;i<=n;i++)
{
p=x*i;
x=p;
s=s+x;
}
cout<<s;
}
