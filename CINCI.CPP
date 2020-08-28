#include<iostream.h>
int suma(int n,int a);
void main()
{int n,a,i;
cout<<"n=";cin>>n;
	if(suma(n,a)!=-1)
	cout<<suma(n,a)<<" ";
	else cout<<"nu";
	}

int suma(int n,int a)
{int cif,s=0,i,v[99];
for(i=1;i<=n;i++)
{cout<<"a=";cin>>a;
	while(a!=0)
		{cif=a%10;
		if(cif%2==0)
			s=s+cif;
		else
			return -1;
		n=n/10;
		v[i]=s;}
	return v[i];}}

