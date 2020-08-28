#include<iostream.h>
void main()
{int n,m,i,j,a[99][99],aux,p,l;
cout<<"n=";cin>>n;cout<<"m=";cin>>m;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
	      cout<<a[i][j]<<" ";
	      cout<<endl;}
cout<<"p=";cin>>p;
for(i=n;i>=p;i--)
	for(j=1;j<=m;j++)
		a[i+1][j]=a[i][j];
for(j=1;j<=m;j++)
	a[p][j]=0;
for(i=1;i<=n+1;i++)
	{for(j=1;j<=m;j++)
	    cout<<a[i][j]<<" ";
	    cout<<endl;}}
