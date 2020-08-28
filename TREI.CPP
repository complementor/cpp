#include<iostream.h>
#include<math.h>
#include<conio.h>
int f(int a);
void main()
{int n,i;
cout<<"n=";cin>>n;
for(i=1;i<=1000;i++)
	if(f(i)==n)
	cout<<i<<" ";cout<<"ultima cifra a acostora coincide";
        getch();
	}
int f(int a)
{int nr;
nr=pow(a,2);
nr=nr%10;
return nr;}