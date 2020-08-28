#include<iostream.h>
void f(unsigned long a);
void main()
{unsigned long a;int n,i;
cout<<"n=";cin>>n;
for(i=1;i<=n;i++)
	{cout<<"a=";cin>>a;f(a);}}
void f(unsigned long a)
{int cif,s1,s2,copiea,t;
copiea=a;    s1=0;s2=0;
{while(copiea!=0)
	{t=0;cif=copiea%10;
	s1=s1+cif;
	copiea=copiea/10;

	cif=copiea%10;
	s2=s2+cif;
	copiea=copiea/10; }

	if(s1==s2)
	     t=t+1;}

cout<<t;}
