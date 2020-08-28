#include<iostream.h>
#include<conio.h>
struct nod
{int inf,urm;};
nod lista[10];
int s[10],nr,adr,prim=-1;

int exista_spatiu()
{if(nr<10)
	return 1;
else return 0;
}

void aloca(int &adr)
{int i=0;
while(s[i]) i++;
adr=i;
s[i]=1;
nr++;
}

void elibereaza(int adr)
{s[adr]=0;
nr--;
if(adr==prim)
	prim=-1;
}
void stergere(int adr)
{int p,q;
if(adr==prim)
	{prim=lista[prim].urm;
	elibereaza(adr);
	}
else{q=prim;
     p=lista[prim].urm;
     while(p!=adr)
     {q=p;
     p=lista[p].urm;}
     lista[q].urm=lista[p].urm;
     elibereaza(adr);}}
void adauga(int &prim, int x)
{int p=prim;
aloca(adr);
lista[adr].inf=x;
lista[adr].urm=-1;
if(prim==-1)
	prim=adr;
else {while(lista[p].urm!=-1)
		p=lista[p].urm;
      lista[p].urm=adr;
      }
}

int cautare(int x)
{int p=prim;
while(p!=-1 &&lista[p].inf!=x)
	p=lista[p].urm;
return p;
}

void inserare_dupa(int adr, int x)
{int p;
aloca(p);
lista[p].inf=x;
lista[p].urm=lista[adr].urm;
lista[adr].urm=p;
}

void inserare_inainte(int adr, int x)
{int p;
aloca(p);
lista[p]=lista[adr];
lista[adr].inf=x;
lista[adr].urm=p;
}

void parcurgere(int prim)
{int p=prim;
if(prim==-1)
	cout<<"lista vida";
else
	{while(p!=-1)
		{cout<<lista[p].inf<<" ";
		p=lista[p].urm;
		}
	}
}

void main()
{int p,opt,x,y;clrscr();
do
	{               cout<<endl;
	cout<<"1 CREARE"<<endl;
	cout<<"2 PARCURGERE"<<endl;
	cout<<"3 CAUTARE"<<endl;
	cout<<"4 INSERARE DUPA"<<endl;
	cout<<"5 INSERARE INAINTE"<<endl;
	cout<<"6 STERGERE"<<endl;
	cout<<"7 IESIERE"<<endl<<endl;
	cout<<" OPTIUNEA = ";cin>>opt;
	switch(opt)
		{case 1:cout<<"nod ";cin>>x;
			if(exista_spatiu()) adauga(prim,x);
			else cout<<"nu exista spatiu";
			break;
		case 2:parcurgere(prim);break;
		case 3:cout<<"nod ";cin>>x;
			p=cautare(x);
			if(p!=-1)
				cout<<lista[p].inf;
			else cout<<x<<" nu exista";
			break;
		case 4:cout<<"nodul dupa care se insereaza ";cin>>x;
			p=cautare(x);
			if(p!=-1)
				{cout<<"nodul de inserat ";cin>>y;
				if(exista_spatiu())
					inserare_dupa(p,y);
				else cout<<"nu exista spatiu";
				}
			else cout<<"nu exista nodul "<<x;
			break;
		case 5:cout<<"nodul inaintea caruia se insereaza=";cin>>x;
			p=cautare(x);
			if(p!=-1)
				{cout<<"nodul de inserat ";cin>>y;
				if(exista_spatiu())
					inserare_inainte(p,y);
				else cout<<"nu exista spatiu";
				}
			else cout<<" nuexista nodul "<<x;
			break;
		case 6:cout<<"nod=";cin>>x;
		p=cautare(x);
		if(p!=-1)
			stergere(p);
		else cout<<"nu exista nodul"<<x;
		break;
		}
	getch();
	}while(opt!=7);
}
