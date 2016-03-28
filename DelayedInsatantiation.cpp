//class X{
//public:
//	void f(){}
//};
//class Y{
//public:
//	void g(){}
//};
//template<class T> class Z{
//	T t;
//public:
//	void a(){t.f();}//the member function cannot overall generated,it generated when it be called
//	void b(){t.g();}
//
//};
//int main(){
//	Z<X>zx;
//	zx.a();//the code of b isn't generated
//	Z<Y>zy;
//	zy.b();
//
//}