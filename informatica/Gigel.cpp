#include<iostream> #include<fstream> #include<string.h> #include<math.h>
using namespace std;
/***/
int main()
{
    long long n,c=0,a=365,b=366,k=1,u=0,ore,minute,secunde;
    cin>>n;
    secunde=n%60;
    n=n/60;
    minute=n%60;
    n=n/60;
    ore=n%24;
    n=n/24;
    while(n>=a)
    {
        if(k%4==0)
            n=n-b;
        else
            n=n-a;
        c++;
        k++;
    }
    while(n>31)
    {
        n=n-31;
        u++;
    }
    if(n==30||n==29)
        u++;
    n++;
    cout<<"Gigel are "<<c<<" ani "<<u<<" luni,  "<<n<<" zile,"<<ore<<"ore,"<<minute<<"minute si"<<secunde<<"secunde";
    return 0;
}
