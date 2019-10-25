#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=2;
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
            {
                  cout<<"not prime"<<endl;
                  return 0;
            }
        i++;
    }
        if(i==n)
            {
                  cout<<"prime"<<endl;
            }
    return 0;
}
