#include<iostream.h>
struct torase
  { float long,lat,x,d;
  };
struct oras
  {char nume[20];
  torase lglt;
  };oras o[20];
void main()
 {int i,n;
 cout<<"nr de orase este";
 cin>>n;
 for(i=1;i<=n;i++)
  {cout<<"numele orasului este"<<i;
  cin>o[i].nume;
  cout<<"longitudinea orasului este"<<i;
  cin>>o[i].lglt.long;
  cout<<"latitudinea orasului este "<<i;
  cin>>o[i].lglt.lat;
  }
for(i=1;i<=n;i++)
 { d=sqrt(pow(long,x,2)+pow(lat,x,2));
    if(min>d)
    min=d; }
cout<<"orasul cel mai apropiat este"<<o[i].nume<<"la distanta"<<d;
}
