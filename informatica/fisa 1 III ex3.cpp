#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n,x,sw=0;
    ifstream f("BAC2.txt");
    cin>>n;
    while(f>>x)
        if(x%n==0)
        {
            cout<<x<<" ";
            sw=1;
        }
    if(sw==0)
        cout<<"NU SE EXISTA";
}
