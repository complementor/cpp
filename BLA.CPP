#include<iostream.h>
#include<stdlib.h>
void main()
{int i,j,n,m,a[99][99],t=0;
cout<<"n=";cin>>n;
cout<<"m=";cin>>m;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		a[i][j]=random(2);
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
		cout<<a[i][j]<<" ";
	cout<<endl;}              }
for(i=2;i<=n-1;i++)
	for(j=2;j<=m-1;j++)
		{if(a[i][j]==1)
			if(a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1]<2)
				a[i][j]=0;}
		{if((i==1)||(j==1)||(i==n)||(j==m))
		   a[i][j]=0;}}

