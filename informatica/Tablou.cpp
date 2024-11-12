#include<iostream> #include<fstream> #include<string.h> #include<math.h>
using namespace std;
/***/
int main()    {    int n,s,a[100][100],y=1,c=0,i,j=1,k=1,v,u,z;
                   cin>>n;    cin>>s;
                   v=s/n;     u=s-v*n;
                   for(i=1;i<=n;i++)    z=z+i;
                   while(v>y)    {    a[1][k]=j;    y+=j;    j++;    c++;    k++;    }
                   y--;
                   if(n>c-1)    cout<<"Nu se poate";
                   else    {    k=y-v;
                                for(i=1;i<=c;i++)    if(a[1][i]==k)    for(j=i;j<=c;j++)    a[1][j]=a[1][j+1];
                                c--;
                                while(c>n)    {    a[1][c-1]=a[1][c-1]+a[1][c];    c--;    }
                                for(i=1;i<=n;i++)    {    for(j=1;j<n;j++)    a[i+1][j+1]=a[i][j];
                                                          a[i+1][1]=a[i][n];    }
                                i=n;
                                for(j=1;j<=n;j++)    if(a[i][j]==v-z)    a[i][j]=a[i][j]+u;
                                for(i=1;i<=n;i++)    {    for(j=1;j<=n;j++)    cout<<a[i][j]<<" ";
                                                                               cout<<endl;    }
                            }
                  return 0;
            }

