#include<iostream>
using namespace std;
int main()
{

    int initial,finall,step,f,c;
    cout<<"enter values of initial,final,step"<<endl;
    cin>>initial>>finall>>step;
    while(initial<=finall)
    {
        cout<<initial<<"\t";
        f=initial;
        c=5/9.0*(f-32);
        cout<<c<<endl;
        initial=initial+step;
    }
    return 0;

}
