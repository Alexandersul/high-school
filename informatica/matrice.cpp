#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n,i,k,l,a[5][5];
    cin>>n;
    ofstream g("matrice.out");
    while(n!=0)
    {
        for(i=1; i<=5; i++)
            g<< n%10 << " ";
        cout << endl;
        n=n/10;
    }
    g.close();
    ifstream g("matrice.in");
    for(k=1; k<=5; k++)
        for(l=1; l<=5; l++)
            g>>a[k][l];
    for(k=1; k<=5; k++)
        for(l=1; l<=5; l++)
            cout<<a[k][l];
    return 0;

}

