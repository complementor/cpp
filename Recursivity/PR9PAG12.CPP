#include<iostream.h>
#include<conio.h>
int i=1,k,a[10],n;
int f(int i)
{if(i==0)
 return 0;
 else { cin>>i;cout<<"i=";
 a[k]=i; k++;n=k; return f(i);} }
void main()
{clrscr();f(i);for(k=1;k<=n-2;k++)
		{{cout<<a[k];}
		cout<<" ";};getch();}
