#include<iostream.h>
#include<conio.h>
#include<math.h>
int a[10],n,p=1;
int f(int i)
{if(i==0)
 return  0;
else if(a[i]>0)
	return f(i-1)+a[i];
if(a[i]<0){p=p*a[i];
	return f(i-1);}}
void main()
{clrscr();
cout<<"n=";
cin>>n;      int i;
for(i=1;i<=n;i++)
{cout<<"a["<<i<<"]=";cin>>a[i];      }
cout<<f(n);cout<<endl;
cout<<p;
getch();}