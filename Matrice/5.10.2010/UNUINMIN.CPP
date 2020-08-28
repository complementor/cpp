#include<iostream.h>
void main()
{int n,m,i,j,a[99][99],p;
cout<<"n=";cin>>n;cout<<"m=";cin>>m;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
	      cout<<a[i][j]<<" ";
	      cout<<endl;}
cout<<"p=";cin>>p;
for(i=p;i<=n;i++)
	for(j=1;j<=m;j++)
		a[i][j]=a[i+1][j];
for(i=1;i<=n-1;i++)
	{for(j=1;j<=m;j++)
	    cout<<a[i][j]<<" ";
	    cout<<endl;}}
