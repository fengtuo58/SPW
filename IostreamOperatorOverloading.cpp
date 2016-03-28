//#include <iostream>
//#include <sstream>
//#include <cstring>
//using namespace std;
//class InitArray{
//	enum {sz=5};
//	int i[sz];
//public:
//	InitArray(){memset(i,0,sz*sizeof(*i));}
//	int& operator[](int x){
//		return i[x];
//	}
//    friend ostream& operator<<(ostream&os,const InitArray& ia );
//	friend istream& operator>>(istream&is,InitArray&ia);
//};
//   ostream& operator<<(ostream&os,const InitArray& ia )
//  {
//     for (int j=0;j<ia.sz;j++)
//     {
//     os<<ia.i[j];
//	 if(j!=ia.sz-1) os<<" ,";
//     }
//	 os<<endl;
//	 return os;
//  }
//   istream& operator>>(istream & is,InitArray&ia){
//	   for (int j=0;j<ia.sz;j++)
//		   is>>ia.i[j];
//	   return is;
//   }
//   int main()
//   {
//	   stringstream input("47 34 56 92 103 ");
//	   InitArray I;
//	   input>>I;
//	   I[4]=-1;
//	   cout<<I<<endl;
//	  /* cout<<sizeof(int);*/
//   }