#include <iostream>
using namespace std;
int main() {
    int n; cin>> n;
    int i=1;
    while(i<=n){
        ///nos.
        int j=1;
        while (j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        ///stars
        int k=1;
        while(k<=2*i-3){
            cout<<"*";
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
}
   