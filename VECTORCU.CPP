#include<iostream.h>
void main ()
{int a[3],i,nr;
for(i=1;i<=3;i++)
    {cout<<"a["<<i<<"]=";
    cin>>a[i];}
    nr=(a[1]*100)+((a[2]%10)*10)+(a[3]%10);
    cout<<"nr format este "<<nr<<endl;}