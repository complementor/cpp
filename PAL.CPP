#include<iostream.h>
#include<conio.h>
int pal(long n);
void main()
{long n;  clrscr();
cout<<"n=";cin>>n;
if(pal(n))
	cout<<n<<"este palindrom";
else cout<<n<<"nu este palindrom";getch() ;
}
int pal(long n)
{int cif,inv,copien=n;
inv=0;
{while(n!=0)
	{cif=n%10;
	inv=inv*10+cif;
	n=n/10;}
	if(copien==inv)
		return 1;
	else return 0;}}