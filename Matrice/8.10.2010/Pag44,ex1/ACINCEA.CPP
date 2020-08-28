#include<iostream.h>
void main()
{int n,m,i,j,a[99][99],aux,c,d;
cout<<"n=";cin>>n;cout<<"m=";cin>>m;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
		cout<<a[i][j]<<"  ";cout<<endl;}cout<<endl;
cout<<"c=";cin>>c;cout<<"d=";cin>>d;
for(i=1;i<=n;i++)
		 {aux=a[i][c];
		 a[i][c]=a[i][d];
		 a[i][d]=aux;}
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
	      cout<<a[i][j]<<"  ";
		cout<<endl;} }