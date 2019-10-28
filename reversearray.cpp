#include<iostream>
using namespace std;

void reverse(int *a,int n)
{
    int i,j;
    i=0;
    j=n-1;
    while(i<=j)
    {
        swap(*(a+i),*(a+j));
        i++;
        j--;
    }
}

int main()
{

    int a[10000];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a,n);
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
