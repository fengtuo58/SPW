//#include <exception>
//#include<iostream>
//#include <cstdio>
//using namespace std;
//class A{};
//class B{ int s;
//public:
//	B(int l):s(l){} 
//	void show(){cout<<s;}};
//void my_thandler(){
//	cout<<"terminate called"<<endl;
//	exit(0);
//}
//void my_thandler1(){throw A();}
//void my_thandler2(){throw ;}
//void t(){throw B(2);}
//void f()throw(A) { t();}
//void g() throw(A,bad_exception){t();}
//int main(){
//	set_terminate(my_thandler);
//	set_unexpected(my_thandler1);
//	try{
//		f();
//
//	}catch(A&){
//		cout<<"caution an A from f"<<endl;
//	}
//	set_unexpected(my_thandler2);
//	try{
//		g();
//	}catch(bad_exception&){
//		cout<<"caught a bad_exception from g"<<endl;
//	}
//	try{
//	try{
//		f();
//	}catch(...){
//		cout<<"this will never print"<<endl;
//
//	}
//	
//	}catch(B& a){ a.show();}
//}
//
