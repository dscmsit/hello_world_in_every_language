#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter character"<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"upper case";
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<"lower case";
    }
    return 0;
}
