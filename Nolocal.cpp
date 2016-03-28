//#include <iostream>
//using namespace std;
//class  Except1{};
//class  Except2:public Except1{
//public:
//	Except2(const Except1&){}
//};
//void f(){throw  Except1();}
//
//
//int main(){
//	try{
//		f();
//    }
//	catch(Except1&){
//		cout<<"inside catch(Excatoin1)"<<endl;
//	}
//	catch(Except2&){
//		cout<<"inside catch(Exception2)"<<endl;
//	}
//	
//}