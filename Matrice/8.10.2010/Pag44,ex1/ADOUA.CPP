#include<iostream.h>
void main()
{int n,m,i,j,a[99][99],s;
cout<<"n=";cin>>n;cout<<"m=";cin>>m;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
		cout<<a[i][j]<<" ";cout<<endl;}
for(j=1;j<=m;j++)
	{s=0;
	for(i=1;i<=n;i++)
		{s=s+a[i][j];}
		cout<<s<<endl;} }