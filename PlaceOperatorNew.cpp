//#include <cstddef>
//#include <iostream>
//using  namespace std;
//class X{
//	int i;
//public:
//	X(int ii=0):i(ii)
//	{
//		cout<<"this is "<<this<<endl;
//	}
//	~X(){
//		cout<<"X::~X()"<<this<<endl;
//	}
//	void *operator new (size_t ,void *loc){
//		return loc
//;	}
//};
//int main()
//{
//	int*p=0;
//	{
//		int l[10]={0,0,0,0,0,0,0,0,0,0,};
//		cout<<"l="<<l<<endl;X*xp=new(l)X(47);xp->~X();
//		p=l;
//	}
//	
//	
//	
//	int i=0;
//	while(i<10){ cout<<"   "<<p[i]<<"     ";i++;}
//}