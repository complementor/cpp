#include<iostream.h>
void main ()
{int m,n,a[10],b[10],i,j,c[10],k,gasit;
cout<<"n=";
cin>>n;
for(i=1;i<=n;i++)
	{cout<<"a["<<i<<"]=";
	cin>>a[i]; }
cout<<"m=";
cin>>m ;
for(j=1;j<=m;j++)
	{cout<<"b["<<j<<"]=";
	cin>>b[j];}
k=0;
for(i=1;i<=n;i++)
	{gasit=0;
	for(j=1;j<=m;j++)
		if(a[i]==b[j])
			gasit=1;
	if(gasit==1)
		{k++;c[k]=a[i];}}
for(i=1;i<=k;i++)
	cout<<c[i]<<" ";}
