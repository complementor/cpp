#include<iostream.h>
int a[10],m,x,n,i;
int cauta(int li,int ls,int x)
{if(li<=ls)
	{m=(li+ls)/2;
	if(a[m]==x)
		return m;
	else if(x<a[m])
		return cauta(li,m-1,x);
	else cauta(m+1,ls,x);}
else return -1;}
void main()
{
cout<<"n=";cin>>n;
for(i=0;i<=n;i++)
	{cout<<"a["<<i<<"]=";cin>>a[i];}
cout<<"Valoarea cautata ";cin>>a[i];
m=cauta(0,n-1,x)
if(m!=-1)
	cout<<"elem s-a gasit pe pozitia "<<m;
else cout<<"Nu exista ";}