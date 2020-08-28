#include<iostream.h>
void main()
{int n,m,i,j,a[99][99],aux,ok;
cout<<"n=";cin>>n;cout<<"m=";cin>>m;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
		cout<<a[i][j]<<"  ";cout<<endl;}cout<<endl;
do
{ok=0;
for(i=1;i<=n;i++)
	if(a[i][m]>a[i+1][m])
		{ok=1;aux=a[i][m];
		a[i][m]=a[i+1][m];
		a[i+1][m]=aux;
		}
}while(ok==1);
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
	      cout<<a[i][j]<<"  ";
		cout<<endl;} }