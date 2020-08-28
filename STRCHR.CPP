#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();char a[100],b[100],*p;int i=0;
cin.get(a,100,'\n');int nr=0;cin.get();cin.get(b,100,'\n');
p=strchr(a,'x');
while(p!=0)
{nr++;i++;
strcpy(a,p+1);
gotoxy(20+i,5+i);cout<<a<<endl;p=strchr(a,'x');

}

p=strchr(b,'x');
       i=0;     
while(p!=0)
{nr++;i++;
strcpy(a,p+1);
gotoxy(40+nr,5+i);cout<<a<<endl;p=strchr(a,'x');

}
gotoxy(70,2);cout<<nr<<endl;getch();}