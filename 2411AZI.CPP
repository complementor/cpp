#include<iostream.h>
int a[6][6],n,m,i,j;
void inter();
void main ()
{
cout<<"n=";cin>>n;
cout<<"m=";cin>>m;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;}
inter();
cout<<"matricea modificata este "<<endl;
for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;}
		}
void inter()
{int p,q,aux;
cout<<"introduceti p si q";cin>>p;cin>>q;
for(j=1;j<=m;j++)
	{aux=a[p][j];
	a[p][j]=a[q][j];
	a[q][j]=aux;}}