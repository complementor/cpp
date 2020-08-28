#include<iostream.h>
unsigned n,v[10];
unsigned euclid(unsigned a,unsigned b);
unsigned cmmdc(unsigned li,unsigned ls);
void main()
{int i;
cout<<"n=";cin>>n;
for(i=0;i<n;i++)
{cout<<"v["<<i<<"]=";cin>>v[i];}
cout<<"cmmdc="<<cmmdc(0,n-1);}
unsigned cmmdc(unsigned li,unsigned ls)
{unsigned m;
if(ls-li<=1)
	return euclid(v[li],v[ls]);
m=(li+ls)/2;
return euclid(cmmdc(li,m),cmmdc(m+1,ls));}
unsigned euclid(unsigned a,unsigned b)
{int r;
while(b)
{r=a%b;a=b;b=r;}
return a;
}