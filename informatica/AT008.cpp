#include<iostream>
using namespace std;
int main()
///1
{
    int a[100],n,i;
    cout<<"n=";
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
///2
    for(i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
///3
    int s=0;
    for(i=1; i<=n; i++)
        if(a[i]>0)
            s=s+a[i];
    cout<<s;
    cout<<endl;
///4
    int x,y;
    cout<<"dati capetele de interval";
    cin>>x>>y;
    for(i=1; i<=n; i++)
        if(a[i]>x&&a[i]<y)
            cout<<a[i]<<" ";
    cout<<endl;
///5
    int maxim=-99999999;
///sau merge cu a[1];
    for(i=1; i<=n; i++)
        if(a[i]>maxim)
            maxim=a[i];
    cout<<maxim;
    cout<<endl;
///6
    int p=1;
    for(i=1; i<+n; i++)
        if(a[i]%2==0)
            p=p*a[i];
    cout<<p;
    cout<<endl;
///7
    int minim=99999999;
    for(i=1; i<=n; i++)
        if(a[i]%2==0&&a[i]<minim)
            minim=a[i];
    cout<<minim;
    cout<<endl;
///8
    int c=0;
    s=0;
    for(i=1; i<=n; i++)
        if(a[i]>0)
        {
            s=s+a[i];
            c=c+1;
        }
    if(c==0)
        cout<<"nici un nr pozitiv";
    else
        cout<<1.0*s/c;
 ///9
 for(i=1;i<=n;i++)
if(a[i]%5==0)
cout<<a[i]<<" ";
cout<<endl;
///10
///permutare circulara spre dreapta
int aux;
aux=a[n];
///i este locul unde mutam
for(i=n;i>=2;i--)
a[i]=a[i-1];
a[1]=aux;
for(i=1;i<=n;i++)
cout<<a[i]<<" ";
cout<<endl;
///11









}
