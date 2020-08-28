#include<iostream.h>
void main()
{int n,i,j,a[99][99],d=0,p,s;
cout<<"n=";cin>>n;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
		cout<<a[i][j]<<" ";cout<<endl;}
s=0;
for(i=1;i<=n-1;i++)
	for(j=i+1;j<=n;j++)
	     {s++;
		if(a[i][j]%2==a[n-1][1]%2)
			d++;}
if(d!=s)
	cout<<"numerele nu au aceeasi paritate ";
else if(s==d) cout<<" numerele au aceeasi paritate ";
}
