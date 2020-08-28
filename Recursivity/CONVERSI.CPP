#include<iostream.h>
#include<math.h>
#include<conio.h>
const int max=50;
int n,b,a[max],putere=1;
long conv(int b,int i);
void main()
{int i;       clrscr();
 cout<<"baza de enumeratie: ";cin>>b;
 cout<<"cate cifre are numarul? ";cin>>n;
 cout<<"dati cifrele pe rand: "<<endl;
 for(i=n-1;i>=0;i--)
    {cout<<"cifra "<<i<<":";
     cin>>a[i];
    }
 cout<<endl;
 cout<<"numarul ";
 for(i=n-1;i>=0;i--)
    cout<<a[i];
    cout<<"in baza "<<b<<" transformat in baza 10 este "<<conv(b,0);

 cout<<"bla";goto(50;50)
getch();
}
long conv(int b,int i)
{if(i<n)
   return (conv(b,i+1)+a[i]*pow(b,i));
 else
   return 0;
}