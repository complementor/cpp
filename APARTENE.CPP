#include<iostream.h>
void main ()
{int a[10],i,n,x,gasit;
cout<<"n="; 
cin>>n;
for(i=1;i<=n;i++)
	{cout<<"a["<<i<<"]=";
	cin>>a[i];}
cout<<"x=";cin>>x;
gasit=0;
for(i=1;i<=n;i++)
	if(a[i]==x)
		gasit=1;
if(gasit==1)
	cout<<"valoarea "<<x<<" este spusa de catre tine mai inainte ";
else cout<<"valoarea" <<x<<" este proasta ";
}