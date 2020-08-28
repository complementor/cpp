#include<iostream.h>
void main()
{int n,m,i,j,a[99][99],aux,c;
cout<<"n=";cin>>n;cout<<"m=";cin>>m;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
		cout<<a[i][j]<<"  ";cout<<endl;}cout<<endl;
cout<<"c=";cin>>c;
for(j=c;j<=m;j++)
	    for(i=1;i<=n;i++)
		 a[i][j]=a[i][j+1];
for(i=1;i<=n;i++)
	{for(j=1;j<=m-1;j++)
	      cout<<a[i][j]<<"  ";
		cout<<endl;} }