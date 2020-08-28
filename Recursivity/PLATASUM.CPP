#include<iostream.h>
#include<fstream.h>
#define MAX 20
int n=0,x,v[MAX],w[MAX],z[MAX],S,Suma,sol;
void citire();
int valid(int k);
int solutie();
void afisare(int k);
void BK(int k);
void main()
{citire();
BK(1);
}
void BK(int k)
{int i;

for(i=0;i<=z[k];i++)
	{v[k]=i;
	if(valid(k)==1)
		{if(solutie()==1)
			afisare(k);
			else
			if(k<n) BK(k+1);}}}
void citire()
{int i;
ifstream f("monede.in");
f>>S>>n;
for(i=1;i<=n;i++)
	{f>>w[i];
	z[i]=S/w[i];}}
int valid(int k)
{int i;
Suma=0;
for(i=1;i<=k;i++)
	Suma=Suma+v[i]*w[i];
if(Suma<=S)
 return 1;
 return 0;}
int solutie()
{return Suma==S;}
void afisare(int k)
{int i;
sol++;cout<<"Solutia:"<<sol<<endl;
for(i=1;i<=k;i++)
	if(v[i]) cout<<v[i]<<"monede de valoarea"<<w[i]<<"lei"<<endl;
	cout<<endl;
        }