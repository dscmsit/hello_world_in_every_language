#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int n,i,data;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter data";
    cin>>data;
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            cout<<"data found at "<<i+1;
            break;
        }
    }
    if(i==n)
    {
        cout<<"data not found";
    }

}
