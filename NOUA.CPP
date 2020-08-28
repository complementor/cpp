#include<iostream.h>
int i;
int prime(int n);
void main()
{int n;
cout<<"n=";cin>>n;
for(i=2;i<=n;i++)
	if(prime(i)==1)
		cout<<i<<" ";
		}
int prime(int n)
{int j,ok=1;
for(j=2;j<=i/2;j++)
	if(i%j==0)
		ok=0;
	if(ok!=0)
		return 1;
	else return 0;}