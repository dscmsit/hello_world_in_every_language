#include<iostream>
using namespace std;
int main () {
    int n,line,i,ele,j,r;
    line=1;
    cin>>n;
    cout<<'1'<<endl;
    i=1;
    line++;
    while(line<=n)
    {
        cout<<'1'<<" ";
        ele=1;
        i=1;
        j=line-1;
        r=1;
        while(ele<=line-1)
        {
        i=(i*j)/r;
        cout<<i<<" ";
        j--;
        ele++;
        r++;
        }
        cout<<endl;
        line++;
    }

	return 0;
}
