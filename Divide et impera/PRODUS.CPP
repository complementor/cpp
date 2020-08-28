#include<iostream.h>
int n,v[20],w[10];
int solutie(int k);
void afisare(int k);
void BK(int k);

void main()
{                 int i;
cout<<"n=";cin>>n;
for(i=1;i<=n;i++)
{cout<<"w["<<i<<"]=";cin>>w[i];}
BK(1);}

void BK(int k)
{int i;
for(i=1;i<=w[k];i++)
{v[k]=i;
	if(solutie(k))
		afisare(k);
	else BK(k+1);}

			 }

int solutie(int k)
{
if(k==n)
return 1;
return 0;}

void afisare(int k)
{int i;
for(i=1;i<=k;i++)
cout<<v[i]<<" ";cout<<endl;}
