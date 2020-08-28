#include<iostream.h>
#include<conio.h>
#include<math.h>
int n;
int f(int i)
{if(i==0)
return 0;
else return ((2*i-1)-2*n)+f(i-1);
}
void main()
{int n;clrscr();
cout<<"n=";cin>>n;
cout<<f(n);}