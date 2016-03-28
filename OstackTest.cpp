//#include"Ostack.h"
//#include<fstream>
//#include <iostream>
//#include <string>
//using namespace std;
//
//class MyString:public string,public Object{
//public:
//	~MyString(){cout<<"deleting string:"<<*this<<endl;}
//   MyString(string s):string(s){}
//};
//int main(int argc,char*argv[]){
//	ifstream in(argv[1]);
//	Stack textLines;
//	string line;
//	while (getline(in,line))
//	{
//		textLines.push(new MyString(line));
//	}
//	MyString*s;
//	for (int i=0;i<10;i++)
//	{
//		if ((s=(MyString*)textLines.pop())==0) break;
//	    cout<<*s<<endl;
//		delete s;
//	}
//	cout<<"letting the destructor do the rest:"<<endl;
//}
