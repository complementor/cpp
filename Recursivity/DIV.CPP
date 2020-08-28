#include<iostream.h>
int i;
int f(int n,int &i)
{if(i==1)
	return 1;
else if(n%i==0)
	cout<<i<<" ";i;
	f(n,i);

	  }
void main()
{int n;
cout<<"n=";
cin>>n;
i=n/2;
f(n,i);
cout<<"acestea au fost numerele";
if(f(n,i));}