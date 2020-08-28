#include<iostream.h>
int d,n,i;
int f(int i)
{if(i==0)
 return d;
else {d=d*10+n%10; f(i/10);}  }
void main()
{
cout<<"n=";cin>>n;
f(n);cout<<d;  }