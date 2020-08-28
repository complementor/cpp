#include<iostream.h>
#include<conio.h>
struct complex
{float x,y;};
complex a,b,c;
void afisare(complex e);
void adunare();
void scadere();
void inmultire();
void impartire();
void main()
{cout<<"primul numar;";cin>>a.x>>a.y;
cout<<"al doilea numar;";cin>>b.x>>b.y;
cout<<"a=";afisare(a);cout<<"b=";afisare(b);
adunare();
cout<<"suma=";
afisare(c);

scadere();
cout<<"diferenta=";
afisare(c);

inmultire();
cout<<"produsul=";
afisare(c);

impartire();
cout<<"impartire=";
afisare(c);
getch();
}
void afisare(complex e)
{if(e.y>=0)
	cout<<e.x<<"+"<<e.y<<"i"<<endl;
	else
	cout<<e.x<<e.y<<"i"<<endl;
	}

void adunare()
{c.x=a.x+b.x;
c.y=a.y+b.y;}

void scadere()
{c.x=a.x-b.x;
c.y=a.y-b.y;
}

void inmultire()
{c.x=a.x*b.y-a.y*b.x;
c.y=a.x*b.y+a.y*b.x;
}
void impartire()
{c.x=(a.x*b.x+a.y*b.y)/(b.x*b.x+b.y*b.y);
c.y=(a.y*b.x-a.x*b.y)/(b.x*b.x+b.y*b.y);
}

