#include<iostream.h>
int suma(int n);
void main()
{int n;
cout<<"n=";cin>>n;
cout<<"suma este ";
if(suma(n)!=-1)
	cout<<suma(n);
}
int suma(int n)
{int s,cif,i;
s=0;
while(n!=0)
	{cif=n%10;
	if(cif%2==1)
		s=s+cif;
	else return -1;
	n=n/10; }
return s;
}