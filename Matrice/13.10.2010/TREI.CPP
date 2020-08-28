#include<iostream.h>
void main()
{int n,m,i,j,a[99][99],v[99],k,max;
cout<<"n=";cin>>n;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=2;i<=n;i++)
	{for(j=n-i+1;j<=n;j++)
		cout<<a[i][j]<<" ";cout<<endl;}
for(i=2;i<=n;i++)
	for(j=n-i+1;j<=n;j++)
	   b=a[i][j];
	   while(b!=0)
		cif=cif/b;

