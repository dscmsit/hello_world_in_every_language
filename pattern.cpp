#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int i=1;
    while(i<=n){
       ///space1
        int j=1;
        while (j<=i-1){
            cout<<" ";
            j=j+1;
        }
        cout<<"*";
        
        ///space2
        int k=1;
        while (k<=2*(n-i)-1){
            cout<<" ";
            k=k+1;
        }
        if (i!=n)
        {cout<<"*";}
        i=i+1;
        cout<<endl;

    }

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
