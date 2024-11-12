#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{
 int n,c=0,k=0,x,i;
 cin>>n;
  for(i=1;i<=n;i++)
    {
        cin>>x;
        if(i%2==1&&x==c)        {            cout<<"Becul "; cout<<i; cout<<" "; cout<<"alb"; cout<<endl;            c++;        }
        else if(i%2==1&&x!=c)        {            cout<<"Becul "; cout<<i; cout<<" "; cout<<"galben"; cout<<endl;            k++;        }
        else if(i%2==0&&x==k)             {            cout<<"Becul "; cout<<i; cout<<" "; cout<<"alb"; cout<<endl;            c++;        }
        else if(i%2==0&&x!=k)                  {            cout<<"Becul "; cout<<i; cout<<" "; cout<<"galben";            k++;        }
    }
return 0;
}
