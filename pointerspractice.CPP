#include<iostream.h>
#include<conio.h>
void main()
{
int age[10];
for(int i=0;i<10;i++)
{
cout<<"\nEnter the age : ";
cin>>age[i];
}
cout<<"\nfirst output"<<*age;
cout<<"\nsecond output"<<*(age+3); //or we can write age[3] or we can write age+=3; cout<<*age;
cout<<age;
getch();
}
