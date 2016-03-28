//#include <cassert>
//#include <limits>
//#include<sstream>
//#include <string>
//#include <iostream>
//class S{
//public:
//	S(){printf("sdbgcwhdo");}
//};
//namespace tdv{
//	S s;
//}
//using namespace std;
//class Fixw{
//	string str;
//public:
//	Fixw(const string& s,int width):str(s,0,width){}
//	friend ostream& operator<<(ostream& os,Fixw& fw){
//		return os<<fw.str;
//	}
//};
//typedef unsigned long ulong;
//class bin{
//	ulong n;
//public:
//	bin(ulong nn){n=nn;}
//	friend ostream& operator<<(ostream& os,const bin&b){
//		const ulong ULMAX=numeric_limits<ulong>::max();
//		ulong bit=~(ULMAX>>1);
//		while(bit){
//			os<<(b.n&bit?'1':'0');
//			bit>>=1;
//		}
//		return os;
//	}
//};
//int main(){
//	tdv::s;
//	string words="Things that make us happy .make us wise";
//	for(int i=words.size();--i>=0;){
//		ostringstream s;
//		s<<Fixw(words,i);
//		cout<<Fixw(words,i);
//		assert(s.str()==words.substr(0,i));
//	}
//	ostringstream xs,ys;
//	xs<<bin(0xCAFEBABEUL);
//	assert(xs.str()=="1100""1010""1111""1110""1011""1010""1011""1110");
//	ys<<bin(0x76543210UL);
//	assert(ys.str()=="0111""0110""0101""0100""0011""0010""0001""0000");
//}