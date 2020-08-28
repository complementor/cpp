/*turnurile din hanoi. Se dau n discuri de diametre diferite care se
afla pe tija A in ordine descr a diametrelor. Sa se mute toate discurile
pe tija B folosind tija intermediara C stiind ca pe orice tija in orice
moment discurile trebuie sa fie in ordine descr a diametrelor */
#include<iostream.h>
void hanoi(int n,char a,char b,char c);
void main()
{int n;
 cout<<"n=";cin>>n;
 hanoi(n,'A','B','C');
}
void hanoi(int n,char a,char b,char c)
{if(n==1)
       cout<<"Mut de pe "<<a<<" pe "<<b<<endl;
 else {hanoi(n-1,a,c,b);
       cout<<"Mut de pe "<<a<<" pe "<<b<<endl;
       hanoi(n-1,c,b,a);
      }
}