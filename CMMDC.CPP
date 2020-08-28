#include<iostream.h>
int cmmdc(int a,int b);
void main()
{int a,b;
cout<<"a si b";cin>>a>>b;
cout<<"cmmsc al lui "<<a<<" si "<<b<<" este "<<cmmdc(a,b);}
int cmmdc(int a,int b)
{while(a!=b)
	if(a>b)
		a=a-b;

	else b=b-a;
return a;}