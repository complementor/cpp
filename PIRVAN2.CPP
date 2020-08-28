#include<iostream.h>
void main()
{int i,j,n,m,a[99][99],min;
cout<<"n=";cin>>n;
cout<<"m=";cin>>m;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;}     cout<<endl;
for(j=1;j<=m;j++)
	{min=3200;
	for(i=1;i<=n;i++)
		{if(a[i][j]<min)
			min=a[i][j];
			 }
			 cout<<min<<" ";}}
                         