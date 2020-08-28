#include<iostream.h>
void main()
{int n,i,j,a[99][99],p=0,k=0,cif,s;
cout<<"n=";cin>>n;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
		cout<<a[i][j]<<" ";cout<<endl;}
for(i=2;i<=n;i++)
	for(j=1;j<=i-1;j++)
	    if(a[i][j]>9)
		{while(a[i][j]!=0)
			{cif=a[i][j]%10;
			a[i][j]=a[i][j]/10;
			p++;   `  }
	    if(p%2==0)
			k++;}
cout<<k<<endl;}
