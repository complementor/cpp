#include<iostream.h>
int a[50];
void conv(int n,int b,int &k);

void main()
{int n,b,k=0;
 cout<<"baza= ";cin>>b;
 cout<<"numarul in baza 10= ";cin>>n;
 conv(n,b,k);
 cout<<"k= "<<k<<endl;
 cout<<endl;
 cout<<"numarul "<<n<<" convertit in baza "<<b<<" este ";
 for(int i=k-1;i>=0;i--)
    cout<<a[i];
}

void conv(int n,int b,int &k)
{if(n>0)
   {a[k]=n%b;
    k++;
    conv(n/b,b,k);
   }
}