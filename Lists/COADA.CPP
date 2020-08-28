#include<iostream.h>
#include<conio.h>
int MAX=10,e,ultim=-1,prim=-1,coada[10];
void adauga(int &ultim,int e)
{if(ultim<MAX-1)
	coada[++ultim]=e;
else
cout<<"coada plina"<<endl;}
void stergere(int &prim,int ultim)
	{if(prim<=ultim)
	{coada[prim]=0;
	prim++;}
	else
	cout<<"coada vida"<<endl;}
void main()
{cout<<"valoarea de adaugat "<<endl;
cin>>e;
adauga(ultim,e);cout<<"valoarea de adaugat "<<endl;
cin>>e;
adauga(ultim,e);cout<<"valoarea de adaugat "<<endl;
cin>>e;
adauga(ultim,e);
int i;

cout<<"valoarea de adaugat "<<endl;
cin>>e;
adauga(ultim,e);

cout<<"valoarea de adaugat "<<endl;
cin>>e;
adauga(ultim,e);

for(i=ultim;i>=0;i--)
	cout<<coada[i]<<" ";
	cout<<endl;getch();clrscr();
stergere(prim,ultim);stergere(prim,ultim);stergere(prim,ultim);
for(i=ultim;i>=0;i--)
	cout<<coada[i]<<" ";
	cout<<endl;getch();clrscr();}

