#include<iostream>
using namespace std;
int main()
{
    int n,i,y,sw;
    float x;
    sw=1;
    cin>>n;
    cin>>x;
    for(i=1; i<=n; i++)
    {
        cin>>y;
        if(x>y)
            sw=0;
        else
            sw=1;
        x=y;
    }
    if(sw==1)
        cout<<"Sirul e ordonat crescator";
    else
        cout<<"Sirul nu e ordonat crescator";
}
