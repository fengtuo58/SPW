//#ifndef   ITERATORTEMPLATE_H
//#define   ITERATORTEMPLATE_H
//#include <iostream>
//template<class T,int ssize=100>
//class StackTemplate{
//	T stack[ssize];
//	int top;
//public:
// StackTemplate():top(0){}
//	void push(const T &i)
//	{
//		stack[top++]=i;
//	}
//	T pop(){
//		return stack[--top];
//	}
//	class iterator ;
//	friend class iterator;
//	class   iterator{
//		StackTemplate &s;
//		int index;
//	public:
//		iterator(StackTemplate& st):s(st),index(0){}
//		iterator(StackTemplate& st,bool):s(st),index(s.top){}
//		T operator*() const 
//		{
//			return s.stack[index];
//		}
//		T operator ++(){return s.stack[++index];}
//		T operator ++(int) {return s.stack[index++];}
//		iterator&operator+=(int amount)
//		{
//			index+=amount;
//			return *this;
//		}
//		bool operator==(const iterator&rv) const {
//			return index==rv.index;
//		}
//		bool operator!=(const iterator&rv)const{
//			return index!=rv.index;
//		}
//		friend std::ostream& operator<<(std::ostream& os,const iterator&rv) {
//			return  os<<(*rv);
//		}
//
//	};
//
//		
//		iterator begin(){return iterator(*this); }
//		iterator end(){  return iterator(*this,true);}
//	};
//
//
//
//
//
//#endif