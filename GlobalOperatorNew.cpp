//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//using namespace  std;//cout 是用new创建的全局对象是在程序运行之前创建的因此cout与new死锁住了
//void * operator new (size_t s)
//{
//	cout<<"cugdwouicg";
//	printf("s=%d",s);
//	void *p=malloc(s);
//	if(!s) {  printf("out of memory");exit(1);}
//	return p;
//}
//void operator delete(void *p)
//{
//	printf("operator delete");
//	free(p);
//
//}
//class S{
//	int i[100];
//public:
//	S(){puts("S::S()");}
//	~S(){puts("S::~S()");}
//};
//int main()
//{
//	puts("creating &destroying an int");
//	int *p=new int(47);
//	delete p;
//	puts("creating & destroying an int s");
//	S*s=new S;
//	delete s;
//	puts("creating & destroying s[3]");
//	printf("sisuo \n");
//	S*sa=new S[3];
//	delete [] sa;
//}