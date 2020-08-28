#include<iostream.h>
void main ()
{int a[10],b[10],c[10],m,n,i,r;
cout<<"n=";
cin>>n;
for(i=0;i<n;i++)
       {	cout<<"a["<<i<<"]=";
	cin>>a[i];}
cout<<"m=";cin>>m;
for(i=0;i<m;i++)
	{cout<<"b["<<i<<"]=";
	cin>>b[i];}
if(m>n) r=n;
else r=m;
b[3]=0;
for(i=0;i<=r;i++)
	c[i]=a[i]+b[i];
for(i=0;i<=r;i++)
	cout<<c[i]<<" "; }