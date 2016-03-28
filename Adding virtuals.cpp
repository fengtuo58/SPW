//#include <iostream>
//#include<string>
//using namespace std;
//class Pet{
//	string pname;
//public:
//	Pet(const string &petname):pname(petname){}
//	virtual string name()const {return pname;}
//	/*virtual string sit()const{
//	return Pet::name()+"sits";
//	}*/
//
//virtual	string speak() const
//	{
//		return "";
//	}
//};
//
//class Dog:public Pet{
//	string name;
//public:
//	Dog(const string&pname):Pet(pname){}
//	virtual string sit() const {
//		return Pet::name()+"sits";
//	}
//	string speak()const{
//		return Pet::name()+"says 'bark!'";
//	}
//};
//int main()
//{
//	Pet*p[]={new Pet("generic"),new Dog("bob")};
//	cout<<"p[0]->speak()"<<p[0]->speak()<<endl;
//	cout<<"p[1]->speak()"<<((Dog*)p[1])->sit()<<endl;
//	/*cout<<"p[2]->speak()"<<p[2]->speak()<<endl;*/
//}