#include<iostream.h>
const MAX=20;
int n,p,v[MAX];
int solutie (int k);
void afisare (int k);
void BK(int k);
void main()
{int i;
cout<<"n=";cin>>n;
cout<<"multimea vida "<<endl;
for(p=1;p<=n-1;p++)
	 BK(1);
	 cout<<"{";
for(i=1;i<=n;i++)
	cout<<i<<",";
	cout<<n<<"}";
	}
void BK(int k)
{int i;
for(i=v[k-1]+1;i<=n;i++)
	{v[k]=i;
	if(solutie(k))
		afisare(k);
		else
		BK(k+1);}}
int solutie(int k)
{if(k==p)
	return 1;
	return 0;
	}
void afisare(int k)
{cout<<"{";
for(int i=1;i<k;i++)cout<<v[i]<<",";
cout<<v[k]<<"}"<<endl;
}