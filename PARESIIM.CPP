#include<iostream.h>
void f(int n);
void main()
{int n;
cout<<"n=";cin>>n;
f(n);
}
void f(int n)
{int cif,c,p=0,r=0;
c=n;
while(c!=0)
	{cif=c%10;
	if(cif%2==0)
		p++;
	else r++;
	c=c/10;}
if(p==r)
	cout<<"numarul are imparele egale cu parele"<<endl;
 else cout<<"nu"<<endl;      }