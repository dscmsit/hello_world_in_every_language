#include<iostream>
using namespace std;
template<class T>
class arith{
	T a;
	T b;
	public:
		arith(T A,T B);
		T add();
		T sub();
};
template<class T>
arith<T>::arith(T A,T B){
	a = A;
	b = B;
}
template<class T>
T arith<T>::add(){
	return a+b;
}
template<class T>
T arith<T>::sub(){
	return a-b;
}
int main(){
	arith<int> ar(10,20);
	cout<<ar.add();
	cout<<ar.sub();
	cout<<endl;
	arith<float> ar1(10.4,20.5);
	cout<<ar1.add();
	cout<<ar1.sub();
}
