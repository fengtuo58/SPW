//#include<iostream>
//#include <typeinfo>
//using namespace std;
//template<class T>  class Outer{
//public:
//	 //virtual void odvo(T&h){}
//	template<class R> class Inner{
//	public:
//		void f();
//	}; 
//};
//template<class T> 
//template<class R>
//void Outer<T>::Inner<R>::f(){
//	cout<<"Outer=="<<typeid(T).name()<<endl;
//	cout<<"Inner=="<<typeid(R).name()<<endl;
//	cout<<"Full Inner=="<<typeid(*this).name()<<endl;
//}
//int main(){
//	Outer<int>::Inner<bool>inner;
//	inner.f();
//	//cin.get();
//	int *p=NULL;
//	cout<<typeid(p).name();
//}
