#include<iostream.h>
#include<conio.h>
int nrcif(long n)
{if(n==0) return 0;
else return 1+nrcif(n/10);}
void main()
{long n;clrscr();
cout<<"n=";cin>>n;
cout<<"numarul de cifre "<<nrcif(n)<<endl;getch();}