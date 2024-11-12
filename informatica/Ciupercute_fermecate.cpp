#include<iostream>    #include<fstream>     #include<string.h>    #include<math.h>
using namespace std;
/***/
int main()    {
                  int m,n,c=0,x,i,k=0,j,nn;
                  cin>>m;    cin>>n;
                  nn=n;
                  for(i=1;i<=n;i++)    {    cin>>x;
                                            for(j=1;j<=x;j++)         if(x%j==0)    k++;
                                            if(k==2) {    c++;    nn--;    }
                                            k=0;    }
                 cout<<"doze de licori:"<<c/m;
                 cout<<endl;
                 cout<<"ciuperci fermecate ramase "<<c%m;
                 cout<<endl;
                 cout<<"ciuperci care nu sunt fermecate "<<nn;
                 return 0;
             }
