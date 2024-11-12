#include<iostream>
#include<fstream>
using namespace std;
ifstream f("BAC.in");
int main()
{
    int x,i,y;
    for(i=0; i<=100; i++)
    {
        f>>x;
        if(x%2==1)
            y=x;
    }
    cout<<y;

}

