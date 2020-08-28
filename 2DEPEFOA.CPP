#include<iostream.h>
void main ()
{int a[10],i,n;
cout<<"n=";
cin>>n;
for(i=1;i<=n;i++)
	{cout<<"a["<<i<<"]=";
	cin>>a[i];}
for(i=1;i<=n-2;i++)
	if(a[i+2]==(a[i]+a[i+1]))
		cout<<a[i+2]<<endl; }
