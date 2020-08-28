#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();char a[100],b[100],*p; int l;
cin.get(a,100,'\n');cin.get();
cin.get(b,100,'\n');l=strlen(b);p=strstr(a,b);
while(p)
{strcpy(p,p+l);
p=strstr(a,b); cout<<a<<endl;
}
cout<<a;getch();}