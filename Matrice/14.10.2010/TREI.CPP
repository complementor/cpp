#include<iostream.h>
void main()
{int n,i,j,a[99][99],ok,k=0,cif,s;
cout<<"n=";cin>>n;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
		cout<<a[i][j]<<" ";cout<<endl;}
for(i=2;i<=n;i++)
	for(j=n-i+1;j<=n;j++)
	    if(a[i][j]>9)
		{s=0;  ok=0;
		while(a[i][j]!=0)
			{cif=a[i][j]%10;
			s=s+cif;
			a[i][j]=a[i][j]/10;
			     }
			if(s%2==0)
				ok=1;k++;}

	    if(ok==1)
		cout<<"exista numere cu suma cifrelor para ,"<<k<<" la numar";cout<<endl;}
