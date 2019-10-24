#include<iostream>
using namespace std;
int main()
{
    int n,coun,line,ele;
    cin>>n;
    coun=1;
    line=1;
    while(line<=n)
    {
        ele=1;
        while(ele<=line)
        {
            cout<<coun<<" ";
            ele++;
            coun++;
        }
    cout<<endl;
    line++;
    }

}
