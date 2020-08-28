#include<iostream.h>
#include<math.h>
void main ()
{int a[10],b[10],j,i,n,ok,max;
cout<<"n=";
cin>>n;
for(i=1;i<=n;i++)
	{cout<<"a["<<i<<"]=";
	cin>>a[i];}
max=0;
for(j=1;j<=n-1;j++)
	      {	b[j]=abs(a[j+1]-a[j]);
			if(b[j]>max)
				max=b[j];  }
cout<<max<<endl;}