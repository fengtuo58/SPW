//#include<iostream>
//#include <string>
//using namespace std;
//class Base{
//public:
//	virtual void  h(){}
//	virtual int f()const
//	{
//		cout<<"Base::f()\n"<<endl;
//		return 1;
//	}
//	virtual void f(string)const{}
//	virtual void g()const{}
//
//};
//class  Derive1:public Base{
//public:
//	void g()const{}
//};
//class Derive2:public Base{
//public:
//	int f()const {
//		cout<<"derive2::f()\n";
//		return 2;}
//
//};
//class Derive3:public Base {
//public:
//	/*void f()const{cout<<"Descripytion3"<<endl;}*/
//};
//class Derive4:public Base {
//public:
//	int f(int )const {
//		cout<<"Derive4::f()\n"<<endl;
//		return 4;
//	}
//};
//int main(){
//	string s("hello");
//	//Derive1 d1;
//	//int x=d1.f();
//	//d1.f(s);
//	//Derive2 d2;
//	//x=d2.f();
//	Derive4 d4;
//	int x;
//	/*x=d4.f(4);*/
//	d4.f(9);
//	d4.h();
////	Base& br=d4;
////	br.f();
////	br.f(s);
////	//br.f(7);
//}//