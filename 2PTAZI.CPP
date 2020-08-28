#include<iostream.h>
void main ()
{int n,a[99][99],i,j,aux,p,m,q,l;
cout<<"n=";cin>>n;cout<<"m=";cin>>m;
cout<<"introduceti de la tastatura doua numere cuprinse intre 1 si "<<n<<endl;
cout<<"p=";cin>>p;cout<<"q=";cin>>q;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{	cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
cout<<a[i][j]<<" "<<endl;
for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	       {if(i==p||i==q)
		  l=i; p=l;q=l;aux=p;p=q;q=aux;i=p;i=q;}



cout<<a[i][j]<<" ";}


