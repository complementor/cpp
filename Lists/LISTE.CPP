#include<iostream.h>
#include<conio.h>
struct nod
	{int inf,urm;
	}lista[10];
int p,nr=0,prim=-1,s[10],adr,x;
int exista_spatiu()
{if (nr<20)
	return 1;
return 0;
}

void aloca(int &adr)
{int i=1;
while(s[i]!=0)
	i++;
	adr=i;
	nr++;
	s[i]=1;
}

void elibereaza(int adr)
{nr--;
s[adr]=0;
if(adr==prim)
prim=lista[prim].urm;   }

void adauga(int &prim,int x)
{int p;
p=prim;
aloca(adr);
lista[adr].inf=x;
lista[adr].urm=-1;
if(prim==-1)
	prim=adr;
else {while(lista[p].urm!=-1)
	p=lista[p].urm;
	lista[p].urm=adr;
	}  }
void parcurgere(int prim)
{int p;
p=prim;
if(p==-1)cout<<"Lista  vida";
else while(p!=-1)
	{cout<<lista[p].inf<<" ";
	p=lista[p].urm;
	}              cout<<endl;
	}
int cautare(int x)
{int p;
p=prim;
while((p!=-1)&&(lista[p].inf!=x))
	p=lista[p].urm;
	return p;}

void inserare_dupa(int adr,int x)
{int p;
aloca(p);
lista[p].inf=x;
lista[p].urm=lista[adr].urm;
lista[adr].urm=p;}
void inserare_inainte(int adr,int x)
{int p;
aloca(p);
lista[p]=lista[adr];
lista[adr].inf=x;
lista[adr].urm=p;}
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
void main()
{clrscr();if (exista_spatiu())
	{aloca(p);
	adauga(prim,7);
	parcurgere(prim);}
if(exista_spatiu())
	{aloca(p);
	adauga(prim,3);
	parcurgere(prim);}
inserare_dupa(prim,1);
inserare_dupa(prim,4);
inserare_inainte(prim,1);
inserare_inainte(prim,0);
parcurgere(prim);
/*if(cautare(7)!=-1)
	cout<<cautare(7)<<" Numarul a fost gasit ";
else cout<<" Elementul nu exita ";*/
stergere(lista[prim].urm);
parcurgere(prim);
getch();}

