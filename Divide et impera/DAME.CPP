#include<iostream.h>
#include<math.h>
#define MAX 20
int n,v[MAX],sol;
int valid(int k);
int solutie(int k);
void afisare();
void BK(int k);
void main()
{cout<<"n=";cin>>n;
BK(1);
}
void BK(int k)
{int i;
for(i=1;i<=n;i++)
{v[k]=i;
if(valid(k)==1)
	{if(solutie(k)==1)
	afisare();
	else
	BK(k+1);
	}}}
int valid(int k)
{int i;
for(i=1;i<=k-1;i++)
  if((v[i]==v[k])||(abs(v[k]-v[i])==(k-i)))
  return 0;
  return 1;}
int solutie(int k)
{return k==n;}
void afisare()
{int i,j,x;
sol++;cout<<"\n Solutia:"<<sol<<'\n';
for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
			if(v[i]==j)cout<<"D";
			else cout<<"_";
			cout<<'\n';}}