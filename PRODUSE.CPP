#include<iostream.h>
void main()
{float pret[10],s[10],suma;
int j,p,n,i,nr[10],produse[10],cantitate[10];
cout<<"cate produse are magazinul p=";
cin>>p;
for(i=1;i<=p;i++)
	{cout<<"pret["<<i<<"]=";
	cin>>pret[i];
	}
cout<<"Nr de clienti este n=";
cin>>n;
suma=0;
for(i=1;i<=n;i++)
       {	cout<<" numarul de tipuri de produse cumparate de catre client"<<i<<"=";
	cin>>nr[i];
	s[i]=0;
	for(j=1;j<=nr[i];j++)
	   { cout<<" Produsul ";
	    cin>>produse[j];
	    cout<<" Cantitatea ";
	    cin>>cantitate[j];
	    s[i]=s[i]+pret[produse[j]]*cantitate[j];
	    }
	cout<<" clientul "<<i<<" are de achitat suma "<<s[i]<<endl;
	suma=suma+s[i];
	}
   cout<<"suma totala in casetaa este "<<suma<<endl;
   }