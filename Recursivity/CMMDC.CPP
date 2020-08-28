#include<iostream.h>
#include<conio.h>
int cmmdc(int a,int b)
{if(b)
  return cmmdc(b,a%b);
  else return a;}

void main()
{int a,b;clrscr();
cout<<"a=";cin>>a;
cout<<"b=";cin>>b;
cout<<"c.m.m.d.c.("<<a<<","<<b<<")="<<cmmdc(a,b);getch();}