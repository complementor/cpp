#include<iostream.h>
struct gim
	{char nume[20], prenume[20];
	int p1, p2;
	float pg;
	} a[10],aux;

void main()
{int i,n,ok;
cout<<"n= ";
cin>>n;
for(i=1;i<=n;i++)
	{cout<<i<<".Nume : ";
	cin>>a[i].nume;
	cout<<i<<".Prenume : ";
	cin>>a[i].prenume;
	cout<<i<<".Rezultatul primei probe : ";
	cin>>a[i].p1;
	cout<<i<<".Rezultatul celei de-a doua probe : ";
	cin>>a[i].p2;
	a[i].pg=(a[i].p1+a[i].p2)/2.0;}
do{ok=0;
for(i=1;i<=n;i++)
	if(a[i].pg<a[i+1].pg)
		{ok=1;
		aux=a[i];
		a[i]=a[i+1];
		a[i+1]=aux;}
}while(ok==1);
cout<<"Nr.\tNume Prenume\tP1\t P2\t PG\n\n";
for(i=1;i<=n;i++)
	cout<<i<<".\t"<<a[i].nume<<" "<<a[i].prenume<<"\t"<<a[i].p1<<"\t"<<a[i].p2<<"\t"<<a[i].pg<<"\n";
}
