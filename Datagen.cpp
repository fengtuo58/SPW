//#include<cstdlib>
//#include<ctime>
//#include<fstream>
//#include"DataLogger.h"
//#include <iostream>
//using namespace std;
//int main(){
//	cout<<IntToString(235);
//	time_t timer;
//	srand(time(&timer));
//	ofstream data("data.txt");
//	ofstream bindata("dat.bin",ios::binary);
//	for(int i=0;i<100;i++,timer+=55){
//		double newdepth=rand()%200;
//		double fraction=rand()%100+1;
//		newdepth +=1.0;
//		double  newtemp=150+rand()%200;
//		
//		newtemp +=1.0/fraction;
//		const DataPoint d(timer,Coord(45,20,31),Coord(22,34,18),newdepth,newtemp);
//		data <<d<<endl;
//        bindata.write(reinterpret_cast<const char*>(&d),sizeof(d));
//
//
//	}
//}