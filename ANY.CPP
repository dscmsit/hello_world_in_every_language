#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<iomanip.h>
#include<dos.h>
void main()
{
char name[15],ord[10];
int l;
char ans;
int amt;
int pcount,scount,bcount,fcount,dcount;
do{
amt=0,pcount=0,scount=0,bcount=0,fcount=0,dcount=0;
textcolor(10);
textbackground(3);
clrscr();
cout<<"\t\t\tWelcome to the MASTERO PIZZA\n";
cout<<" Enter your name:";
cin>>name;
cout<<"\t\tMenu\n";
cout<<" CODEITEM   PRICE(Rs)\n"<<"P -  PIZZA(200)\nS -  PASTA(100)\nB -  BURGER(75)\nF -  FRIES(50)\nD - DESERT(100)\n";
cout<<" Dear customer, Place your Order in codes(only in upper case):";
cin>>ord;
textcolor(2);
textbackground(9);
clrscr();
cout<<"\n\tHello " <<name<<", Here's the summary of your Food Bill\n\t\tOrdered string:"<<ord<<endl;
l=strlen(ord);
for(int i=0;i<l;++i)
{
if(ord[i]=='P')
pcount++;
else if(ord[i]=='S')
scount++;
else if(ord[i]=='B')
bcount++;
else if(ord[i]=='F')
fcount++;
else if(ord[i]=='D')
dcount++;
}
amt=((pcount*200)+(scount*100)+(bcount*75)+(fcount*50)+(dcount*100));
cout<<" Bill Amount = "<<pcount<<"*200 + "<<scount<<"*100 + "<<bcount<<"*75 + "<<fcount<<"*50 + "<<dcount<<"*100 \n ";
cout<<"            ="<<amt;
cout<<"\n Thanks For Visiting";
cout<<"\n Have A Nice Day!";
getch();
textcolor(5);
textbackground(7);
clrscr();
cout<<"Do you want to open another Menu-order form ?(answer in single digit (y/n))\n ";
cin>>ans; }
while((ans!='N')&&(ans!='n'));
}




