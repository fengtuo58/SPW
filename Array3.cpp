//#include <iostream>
//using namespace std;
//template<class T,int size=100>
//class Array{
//	T array[size];
//public:
//	T&operator[](int index)
//	{
//		return array[index];
//	}
//	int length() const {return size;}
//
//};
//class Number{
//	float f;
//public:
//	Number(float ff=0.0f):f(ff){}
//	Number&operator=(const Number&n){
//		f=n.f;
//		return *this;
//	}
//	operator float()const
//	{
//return	f;
//	}
//
//};
//template<class T,int size=20>
//class Hoder{
//	Array<T,size>*np;
//public:
//	Hoder():np(0){}
//	T&operator[](int i){
//		if(!np) np=new Array<T,size>;
//		return np->operator [](i);
//	}
//	int length()const{  return size;}
//	~Hoder(){delete np;}
//};
//int main(){
//
//	Hoder<Number>h;
//	for(int i=0;i<20;i++) h[i]=i;
//	for(int j=0;j<20;j++) cout<<h[j]<<endl;
//}