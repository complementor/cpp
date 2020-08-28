#include<iostream.h>
void main()
{int n,m,i,j,a[99][99],v[99],k,max;
cout<<"n=";cin>>n;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
		cout<<a[i][j]<<" ";cout<<endl;}cout<<endl;
for(i=1;i<=n;i++)
	v[i]=0;
for(i=1;i<=n;i++)
	{{for(j=1;j<=n;j++)
		if(a[i][j]>max)
			 max=a[i][j];}
		v[i]=max;}
for(i=1;i<=n;i++)
	cout<<v[i]<<" ";}