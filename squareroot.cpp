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
