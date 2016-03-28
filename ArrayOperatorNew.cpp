//#include <new>
//#include <fstream>
//using namespace  std;
//ofstream trace("uerhfgeir.txt");
//class Widget{
//	enum{sz=10};//³£Á¿
//	int i[sz];
//public:
//	Widget(){trace<<"*";}
//	~Widget(){trace<<"~";}
//	void *operator new (size_t sz){
//		trace<<"Widwet::new:"<<sz<<endl;
//		return ::new char[sz];
//	}
//	void operator delete (void *p)
//	{
//		trace<<"Widget::delete"<<endl;
//		::delete[] p;
//	}	
//	void *operator new[](size_t az)
//	{
//		trace<<"Widget::new[]:"<<az<<"bytes"<<endl;
//		return ::new char[az];
//	}
//	void operator delete [](void * az)
//	{
//		trace<<"WIgdget::delete[]:"<<endl;
//		::delete []az;
//
//	}
//};
//int main()
//{
//	trace<<"new Widget"<<endl;
//	Widget *w=new Widget;
//	trace<<"\ndelete Widget"<<endl;
//	delete w;
//	trace<<"\ndelete Wiget[25]"<<endl;
//	Widget *wa=new Widget[25];
//	trace<<"\nddelete []Widget"<<endl;
//	delete []wa;
//}