#include<iostream.h>
#include<conio.h>
#include<math.h>
int palindrom(int n);
void main()
{int n,p;
cout<<"n=";
cin>>n;
if(p==0)
	cout<<"palindrom="<<palindrom(n);
if(p==1)
	cout<<"palindrom="<<palindrom(n);
getch();
}
int palindrom(int n)
	{int n,cif,p,i;
	c=n;
	while(n!=0)
		{cif=c%10;
		inv=inv+cif*10;
		c=c/10;}
		d=inv;
	while(inv!=0)
		{cif=inv%10;
		d=d+cif*10;
		inv=inv/10;
	if(c==d)
		p=0;