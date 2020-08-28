#include<iostream.h>
#include<conio.h>
int fact(int n)
{if(n<=1)
	return 1;
else  return n*fact(n-1);
}
void main()
{int n,p,c;clrscr();
cout<<"n=";cin>>n;cout<<"p=";cin>>p;
c=fact(n)/(fact(n-p)*fact(p));
cout<<c<<endl;getch();
}







		     