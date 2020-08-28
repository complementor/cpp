#include<iostream.h>
int hanoi(int n,char a,char b,char c);
void main()
{int n;cout<<"n=";cin>>n;
hanoi(n,'A','B','C');}
int hanoi(int n,char a,char b,char c)
{if(n==1)
cout<<a<<"->"<<b<<endl;
else
{hanoi(n-1,a,c,b);
cout<<a<<"->"<<b<<endl;
hanoi(n-1,c,b,a);}}