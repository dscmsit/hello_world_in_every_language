#include<iostream.h>
#include<conio.h>
/*

    *
   ***
  *****
 *******
*********


*/
void main()
{
clrscr();

int n;
cout<<"Enter the number of rows: ";
cin>>n;
int k=0, j=0;
for(int i = 1; i<=n; i++)      // for printing rows
{
for(j=1;j<=(n-i);j++)           //for showing
cout<<" ";
 k =0;
while(k!=(2*i)-1){
cout<<"*";
k++;
}
cout<<"\n";
}
getch();
}


