//#ifndef AUTOCOUNTER_H
//#define AUTOCOUNTER_H
//#include <iostream>
//#include <set>
//#include<string>
//class AutoCounter{
//	static int count;
//	int id;
//	class CleanupCheck{
//		std::set<AutoCounter*>trace;
//	public:
//		void add(AutoCounter*ap){
//			trace.insert(ap);
//		}
// static	std::set<AutoCounter*>::iterator a;
//	static	bool IsLink(){
//		a=verifier.trace.begin();
//		while (a!=verifier.trace.end())
//		{   
//			
//			std::cout<<(*a)->id<<"LNik id link id inkedf ididefnwdifwrngorfgvonrwgfnvoj"<<std::endl;
//			a++;
//		}
//		return verifier.trace.size()==0?0:1; 
//	}
//		void remove(AutoCounter*ap){
//			trace.erase(ap);
//		}
//		~CleanupCheck(){
//			std::cout<<"~CleanupCheck()"<<std::endl;
//		}
//
//	};
//	static  CleanupCheck verifier;
//	AutoCounter():id(count++){
//		verifier.add(this);
//		std::cout<<"created["<<id<<"]"<<std::endl;
//	}
//	AutoCounter(const AutoCounter& );
//	void operator=(const AutoCounter&);
//public:
//static	bool IsLeak(){
//	 
//	return	CleanupCheck::IsLink();
//	}
//	static AutoCounter* create(){
//		return new AutoCounter();
//	}
//	~AutoCounter(){
//		std::cout<<"destroying ["<<id<<"]"<<std::endl;
//		verifier.remove(this);
//	}
//	friend std::ostream &operator <<(std::ostream&os,const AutoCounter&ac){
//		return os<<"AutoCounter "<<ac.id;
//	}
//	friend std::ostream &operator <<(std::ostream&os,const AutoCounter*ac){
//		return os<<"AutoCounter "<<ac->id;
//	}
//};
//int AutoCounter::count=0;
//  AutoCounter::CleanupCheck  AutoCounter::verifier ;
//  std::set<AutoCounter*>::iterator  AutoCounter::CleanupCheck::a=verifier.trace.begin();
//#endif
