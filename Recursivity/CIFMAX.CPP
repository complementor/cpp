#include<iostream.h>
#include<conio.h>
int cifmax(unsigned long  n)
{int a,b;
if(n==0)
	return 0;
else {a=n%10;
      b=cifmax(n/10);
if(a>b)return a;
else return b;}  }
void main()
{unsigned long n; clrscr();
cout<<"numarul introdus :";cin>>n;
cout<<"cea mai mare valoare este "<<cifmax(n);getch();}