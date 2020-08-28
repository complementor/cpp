#include<iostream.h>
#include<conio.h>
int n,a[10],max=-3200;
int f(int i)
{if(i==0)
	return 0;
else{if(a[i]>max)
	max=a[i];f(i-1);
	return max;} }
void main()
{int i;clrscr();
cout<<"n=";
cin>>n;
for(i=1;i<=n;i++)
	{cout<<"a["<<i<<"]=";cin>>a[i];}
for(i=1;i<=n;i++)
	{{cout<<a[i];}cout<<" ";}
cout<<"maxim este "<<f(n);getch();}