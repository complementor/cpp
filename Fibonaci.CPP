#include<conio.h>
#include<iostream.h>

void fibo(unsigned long m);
unsigned long max_f(unsigned long nr);

void main()
{unsigned long n;
clrscr();
cout<<"n=";cin>>n;

cout<<n<<" = ";
fibo(n);
getch();
}
unsigned long max_f(unsigned long nr)
{unsigned long a,b,c;
a=0;b=1;
while(b<=nr)
{c=a+b;
a=b;
b=c;
}
return a;
}

void fibo(unsigned long m)
{int max;
while(m)
{max=max_f(m);
cout<<"+"<<max;
m-=max;}
}