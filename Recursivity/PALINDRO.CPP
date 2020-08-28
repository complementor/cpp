#include<iostream.h>
int a[10],b[10],d,i,,j,n,k;
int f(int i)
{if(i==0)
 return b[j];
else {a[k]=n%10;
     d=d*10+a[k];
     k++;
     f(i/10); }}
void main()
{
cout<<"n=";cin>>n;j=n;
f(n);if(a[k]==a[n]) cout<<d<<"="<<n;                }