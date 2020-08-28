#include<iostream.h>
void main()
{int n,m,i,j,a[99][99],aux,ok;
cout<<"n=";cin>>n;cout<<"m=";cin>>m;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
	      cout<<a[i][j]<<"  ";
	      cout<<endl;}cout<<endl;
do
{ok=0;
for(j=1;j<=n;j++)

       if(a[1][j]>a[1][j+1])
	{ok=1;aux=a[1][j];
	a[1][j]=a[1][j+1];
	a[1][j+1]=aux;}
}while(ok==1);

for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
	    cout<<a[i][j]<<" ";
	    cout<<endl;}}
