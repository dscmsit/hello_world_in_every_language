#include <iostream>

using namespace std;


int main () {
// program to extract the digits behind a decimal in a float data type
long double a;
cout<<"Hey why not enter a float value? I will show you some small magic.";
cin>> a;
cout<< sizeof(a)<<"\n";
for (;a>1;){
    a=(a-1.0);
} //Here we are abusing a for loop to be sure we shave anything larger than 1 off of our variable
  //We will not proceed to print the number until it is less than 1.
  //This is essentially the hard way to split a number, with a whole number we could just use a mod (%)
  //You could increase the input until you can treat it as an int, then mod something appropriate as well
  //You could also stuff the number into an array, then iterate through the array and write out everything after the decimal
  //Hopefully this gets you started with the rest of your code! Let me know if you have questions.
cout<<a;
return 0;
}
