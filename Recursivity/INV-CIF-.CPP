#include<iostream.h>
#include<conio.h>
void inv(long n,long &m)
{if(n!=0)
{m=m*10+n%10;
inv(n/10,m);
}}
void main()
{long n,m=0; clrscr();
cout<<"n=";
cin>>n;
inv(n,m);
cout<<endl<<m;getch();}