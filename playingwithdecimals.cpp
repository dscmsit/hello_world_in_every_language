#include <iostream>

using namespace std;
int main () {
// program to extract the digits behind a decimal in a float data type
float a,c;
int b;
cout<<"HEy why not enter a float value i will show you some small magic";
cin>> a;
cout<< sizeof(a);
b = (int) a ;
c= (float) b;
cout<< sizeof(c);
float sum = c-a;
cout<<sum;

//I m getting a wrong output over here can any1 just check this out and ammend in this short program
return 0;
}