//#include "Pstash.h"
//#include <iostream>
//#include <cstring>
//using namespace std;
//int pstash::add(void *p)
//{
//	const int inflateSize=10;
//	if(next>=quantity) inflate(inflateSize);
//	storage[next++]=p;
//	return (next-1);
//}
//pstash::~pstash(){
//	for (int i=0;i<next;i++)
//	{
//		if (storage[i]) {cout<<"link!!!!!!!!!!!!!!";exit(0)	;}
//	}
//	delete[] storage;
//}
//void *pstash::operator [](int index)const{
//	if(index<0){cout<<"erro index negative!";exit(0);}
//	if (index>=next)
//	{
//		return 0;
//	}
// return storage[index];
//}
//void pstash ::inflate(int increse){
//	const int psz=sizeof(void *);
//	void ** st=new void *[quantity+increse];
//	memset(st,0,(quantity+increse)*psz);
//	memcpy(st,storage,quantity*psz);
//
//	quantity+=increse;
//	delete []storage;
//	storage=st;
//
//}
//void *pstash::remove(int index)
//{
//void *v=operator[](index);
//if(v)  storage[index]=0;
//return v;
//}