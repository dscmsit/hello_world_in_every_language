
#include<iostream>
using namespace std;
int main()
{

    int num,j,precision;
    float i,inc;
    i=0;
    cin>>num>>precision;
    j=0;
    inc=1;
    while(j<=precision)
    {
    while(i*i<=num)
    {
        i=i+inc;
    }
    i=i-inc;
    inc=inc/10.0;
    j++;
    }

    cout<<i;
    return 0;

  #include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=0;
    while(i*i<n){
        i++;
    }
    i=i-1;
    cout<<i<<endl;
}
