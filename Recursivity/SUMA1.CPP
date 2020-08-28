#include<iostream.h>
#include<conio.h>
#include<math.h>
int n,i;
int f(int i)
{if(i==n)
 return 0;
 else return pow((2*i-1),2)+f(i+1);
 }
void main()
{clrscr();cout<<"n=";cin>>n;
cout<<f(i);getch();}