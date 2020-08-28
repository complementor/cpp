#include<iostream.h>
void main()
{int v[10],n,i,div[10],j,max=0,nr;
cout<<"nr elemente=";
cin>>n;
for(i=1;i<=n;i++)
	{cout<<"v["<<i<<"]=";
	 cin>>v[i];
	 div[i]=0;}
for(i=1;i<=n;i++)
	for(j=1;j<=v[i]/2;j++)
		if(v[i]%j==0)
			div[i]++;
for(i=1;i<=n;i++)
	if(div[i]>max)
		{max=div[i];}
for(i=1;i<=n;i++)
	if(div[i]==max)
	cout<<v[i]<<"are c m multi div "<<endl;}
