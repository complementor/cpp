#include<iostream.h>
struct elev
 {char nume[10],prenume[10];
 int minfo,mbio;
 float med;
 }e[25];
 void main()
   {int i,n;
   float mg;
   cout<<"nr de elevi";
   cin>>n;
   for(i=1;i<=n;i++)
     {cout<<"numele elevului "<<i<<endl;
     cin.get(e[i].nume,10,'\n');
     cout<<"prenumele elevului "<<i<<endl;
     cin.get();
     cin.get(e[i].prenume,10,'\n');
     cout<<"media info ";
     cin>>e[i].minfo;
     cout<<"media la bio ";
     cin>>e[i].mbio;
     e[i].med=(e[i].minfo+e[i].mbio)/2.0;
     cout<<"media generala elevului "<<i<<" este "<<e[i].med<<endl;
     }
     mg=0.0;
     for(i=1;i<=n;i++)
	mg=e[i].med+mg;
     mg=(float)mg/n;
     cout<<"media clasei"<<mg<<"este"<<endl;
     }
     