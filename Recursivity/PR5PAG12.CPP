#include<iostream.h>
#include<conio.h>
int n,a[10],p=1;
int f(int i)
{if(i==0)
 return 0;
else{p=p*a[i];
	return f(i-1);
	}}
void main()
{int i;clrscr();
cout<<"n=";
cin>>n;
for(i=1;i<=n;i++)
	{cout<<"a["<<i<<"]=";cin>>a[i];}
f(n);
cout<<p;
getch();}