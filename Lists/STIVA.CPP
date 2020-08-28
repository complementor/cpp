#include<iostream.h>
#include<conio.h>
int MAX=10,vf=-1,e,stiva[10];
void adauga(int &vf,int e)
{if(vf<MAX-1)
stiva[++vf]=e;
else
	cout<<"stiva plina"<<endl;
	}
void stergere(int &vf)
	{int i;
	if(vf!=-1)
		{stiva[vf]=0;
			vf--;
			}
else
	cout<<"stiva vida"<<endl;}
void main()
{clrscr();
cout<<"valoarea de adaugat";
cin>>e;
adauga(vf,e);
int i;
for(i=vf;i>=0;i--)
	cout<<stiva[i]<<" ";
	cout<<endl;
cout<<"valoarea de adaugat";
cin>>e;
adauga(vf,e);

for(i=vf;i>=0;i--)
	cout<<stiva[i]<<" ";
	cout<<endl;
       cout<<"valoarea de adaugat";
cin>>e;
adauga(vf,e);
for(i=vf;i>=0;i--)
	cout<<stiva[i]<<" ";
	cout<<endl;
stergere(vf);
for(i=vf;i>=0;i--)
cout<<stiva [i]<<" ";cout<<endl;
stergere(vf);
for(i=vf;i>=0;i--)
cout<<stiva [i]<<" ";cout<<endl;getch();
	}