//#include <iostream>
//using namespace  std;
//enum note{middle,Csharp,Cflat};
//class Instrument{
//public:
//	virtual void play(note) const
//	{
//     cout<<"Instrument::play"<<endl;
//	}
//	virtual char*what(){
//		return "Instrument";
//	}
//	virtual void adjust(int){
//	}
//};
//class Wind:public Instrument{
//	virtual void play(note) const
//	{
//		cout<<"Wind::play"<<endl;
//	}
//	virtual char*what(){
//		return "WInd";
//	}
//	virtual void adjust(int){
//	}
//};
//class Percussion:public Wind{
//	virtual void play(note) const
//	{
//		cout<<"Percussion::play"<<endl;
//	}
//	/*virtual char*what(){
//	return "Percussion";
//	}*/
//	virtual void adjust(int){
//	}
//};
//void tune (Instrument& I){
//	cout<<I.what()<<endl;
//}
//int main()
//{
//	Instrument a;
//	tune(a);
//	Wind f;
//	tune(f);
//	Percussion c;
//	tune(c);
//}