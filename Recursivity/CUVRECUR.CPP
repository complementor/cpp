#include<iostream.h>
#include<conio.h>a
void inv()
	{char lit;
	cin.get(lit);cout<<lit;
	if(lit!=' ')
	inv();
	cout<<lit;
	}
void main()
	{clrscr();cout<<"introduceti cuvantul:";
	inv();getch();
        }