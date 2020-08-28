#include<iostream.h>
#include<conio.h>
void f(int n);

void main()
{int n;
clrscr();
cout<<"n=";
cin>>n; f(n);    getch();
}
void f(int n)
{long s=0,p=1,i;
for(i=2;i<=n/2;i++)
	{if(n%i==0)
		{s+=i;
		p*=i;}  }
cout<<"s="<<s<<endl;
cout<<"p="<<p;}