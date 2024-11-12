#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

/***/

int main()
{    int a,b,c,v,w=3;
    ifstream f("bac.txt");
    f>>a;
    f>>b;
    while(f>>c)
    {v=2;
        while(a!=b &&b!=c &&a!=c)
        {   v++;
            a=b;
            b=c;
            f>>c;  }
        if(v>w)
          w=v;
        a=b;
        b=c;
    }
    cout<<w;
    return 0;}
