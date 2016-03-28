//template<class Seq,class T,class R>
//void apply(Seq& sq,R(T::*f)()const){//通过指向对象的指针，访问对象的成员函数
//	typename Seq::iterator it=sq.begin();
//	while (it!=sq.end())
//	{
//		((*it++)->*f)();
//	}
//}
//template<class  Seq,class T,class R,class A>
//void apply(Seq& sq,R(T::*f)(A)const,A a){
//	typename Seq::iterator it=sq.begin();
//	while(it!=sq.end()) ((*it++)->*f)(a);
//}
//template<class Seq,class T,class R,class A1,class A2>
//void apply(Seq &seq,R(T::*f)(A1,A2)const,A1 a1,A2 a2){
//	typename Seq::iterator it=seq.begin();
//	while(it!=seq.end())  ((*it++)->*f)(a1,a2);
//}
//template<class Seq,class T,class R>
//void apply(Seq& sq,R(T::*f)()){//通过指向对象的指针，访问对象的成员函数
//	typename Seq::iterator it=sq.begin();
//	while (it!=sq.end())
//	{
//		((*it++)->*f)();
//	}
//}
//template<class  Seq,class T,class R,class A>
//void apply(Seq& sq,R(T::*f)(A),A a){
//	typename Seq::iterator it=sq.begin();
//	while(it!=sq.end()) ((*it)->*f)();
//}
//template<class Seq,class T,class R,class A1,class A2>
//void apply(Seq &seq,R(T::*f)(A1,A2),A1 a1,A2 a2){
//	typename seq::iterator it=seq.begin();
//	while(it!=seq.end())  ((*it++)->*f)(a1,a2);
//}