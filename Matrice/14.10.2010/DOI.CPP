#include<iostream.h>
void main()
{int n,i,j,a[99][99],d,p,s;
cout<<"n=";cin>>n;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
		cout<<a[i][j]<<" ";cout<<endl;}
s=0;
for(i=1;i<=n-1;i++)
	for(j=i+1;j<=n;j++)
		{p=0;
		for(d=2;d<=a[i][j]/2;d++)
			if(a[i][j]%d==0)
				p=1;
			if(p!=1)
				s=s+a[i][j];}
cout<<s<<endl;}

