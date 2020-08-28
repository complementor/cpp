#include<iostream.h>
void main()
{int n,m,i,j,a[99][99],u[99][99];
cout<<"n=";cin>>n;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
		cout<<a[i][j]<<" ";cout<<endl;}  cout<<endl;

for(j=n;j>=1;j--)
       {	for(i=1;i<=n;i++)
		cout<<a[i][j]<<" ";cout<<endl;}}