#include<iostream.h>
#include<conio.h>
void f(int n,int &s,int &p);

void main()
{int n,s=0,p=1;
clrscr();
cout<<"n=";
cin>>n;
f(n,s,p);
cout<<"s="<<s;
cout<<"p="<<p;getch();
}
void f(int n,int &s,int &p)
{int i;
for(i=2;i<=n/2;i++)
	{if(n%i==0)
		{s+=i;
		p*=i;}  }
}