


#include<iostream.h>
#include<math.h>
#include<conio.h>
struct or
  { float x,y;
  };
struct oras
  {char nume[20];
  or a;
  };oras o[20];
void main()
 {int i,k,n,c,b,d,min=3200;
 char f[20];
 clrscr();
 cout<<"nr de orase este ";
 cin>>n;cout<<"numele orasului reper ";cin>>f;;cout<<"long ";cin>>c;cout<<"lat ";cin>>b;
 for(i=1;i<=n;i++)
  {cout<<"numele orasului "<<i<<" este";
  cin>>o[i].nume;
  cout<<"longitudinea orasului "<<i<<" este";
  cin>>o[i].a.x;
  cout<<"latitudinea orasului "<<i<<" este ";
  cin>>o[i].a.y;
  }
for(i=1;i<=n;i++)
 { d=sqrt(pow(o[i].a.x-c,2)+pow(o[i].a.y-b,2));
    if(min>d)
    {min=d;
    k=i; }
 cout<<"orasul cel mai apropiat de"<<f<<" este "<<o[k].nume<<" la distanta de "<<min;
  getch();   } }
