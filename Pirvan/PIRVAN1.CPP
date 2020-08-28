#include<iostream.h>
void f(int i);
void main()
{int a,b,i;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
for(i=a;i<=b;i++)
	{f(i);} }
void f(int i)
{int j,ok=0;
for(j=2;j<=i/2;j++)
	{if(i%j==0)
		ok=1;}
	if(ok!=1)
	cout<<i<<" ";}