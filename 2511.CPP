#include<iostream.h>
#include<conio.h>
int a[10][10],b[10][10],i,j,n;
void s();
void main()
{clrscr();
cout<<"n=";cin>>n;
for(i=1;i<=n;i++)
	{{for(j=1;j<=n;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}}
	{for(j=1;j<=n;j++)
		{cout<<"b["<<i<<"]["<<j<<"]=";cin>>b[i][j];}}}
for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
		gotoxy(6,20);cout<<a[i][j]<<" ";cout<<endl;}cout<<endl;

for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
		gotoxy(6,20);
		cout<<b[i][j]<<" ";cout<<endl;} cout<<endl;
s();getch();}
void s()
{int c[10][10];
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		c[i][j]=0;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		c[i][j]=a[i][j]+b[i][j];
for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
	      gotoxy(6,20);	cout<<c[i][j]<<" ";cout<<endl;}}