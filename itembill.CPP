#include<iostream.h>
#include<conio.h>
class itemdetails
{
public:
int item_no;
char item_name[50];
float item_price;
};
class Discounteditem:public itemdetails
{
public:
int discount_percent;
int discounted_price;
void accept_details()
{
cout<<"\n Enter item name : ";
cin>>item_name;
cout<<"\n Enter the item no : ";
cin>>item_no;
cout<<"\n Enter item price : ";
cin>>item_price;
cout<<"\n Enter discount percent : ";
cin>>discount_percent;
cout<<"\n--------------------\n";
discounted_price = item_price -((item_price*discount_percent)/100);
}
void display_details()
{
cout<<"\n item name : "<<item_name;
cout<<"\n item no : "<<item_no;
cout<<"\n item price : "<<item_price;
cout<<"\n discount percent : "<<discount_percent;
cout<<"\n discount price : "<<discounted_price;
cout<<"\n---------------------\n";}};
void main()
{
clrscr();
int i,cnt,discount =0,price =0;
Discounteditem dt[100];
cout<<"\n\t\t\tITEM BILL";
cout<<"\n How many items you want to enter ? : ";
cin>>cnt;
for(i=1;i<=cnt;i++)
{
dt[i].accept_details();
}
for(i =1;i<=cnt;i++)
{dt[i].display_details();
}
for(i=1;i<=cnt;i++)
{
price =price + dt[i].item_price;
}
for(i =1;i<=cnt;i++)
{
  discount = discount + dt[i].item_price - dt[i].discounted_price;
  }
  cout<<"\n Total price : "<<price;
  cout<<"\n Total discount : "<<discount;
  getch();}
















