//#include "Shape.h"
//#include<vector>
//#include "TPstash2.h"
//#include "Tstack2.h"
//using namespace  std;
//class Drawing:public PStash<Shape>{
//public:
//	~Drawing(){cout<<"~Drawing"<<endl;}
//};
//class Plan:public Stack<Shape>{
//public:
//	~Plan(){cout<<"~plan"<<endl;}
//	
//};
//class Schematic:public vector<Shape*>{
//public:
//	~Schematic(){cout<<"~Schematic()"<<endl;}
//
//};
//template<class Iter>
//void drawAll(Iter start,Iter end){
//	while(start!=end)   {    (*start)->draw();start++;    }
//}
//int main()
//{
//	Drawing d;
//	d.add(new Circle);
//	d.add(new Square);
//	d.add(new Line);
//	Plan p;
//	p.push(new Line);
//	p.push(new Square);
//	p.push(new Circle);
//	Schematic s;
//	s.push_back(new Square);
//	s.push_back(new Circle);
//	s.push_back(new Line);
//	Shape*sarray[]={new Circle,new Square,new Line};
//	cout<<"Drawing d:"<<endl;
//	drawAll(d.begin(),d.end());
//	cout<<"PLan p:"<<endl;
//	drawAll(p.begin(),p.end());
//	cout<<"Schematic s:"<<endl;
//	drawAll(s.begin(),s.end());
//	cout<<"Array sarray:"<<endl;
//	drawAll(sarray,sarray+sizeof(sarray)/sizeof(*sarray));
//	cout<<"End of main()"<<endl;
//
//
//}