//#ifndef DATALOG_H
//#define  DATALOG_H
//#include<ctime>
//#include <string>
//#include <iosfwd>
//#include <sstream>
//using std::ostream;
//struct Coord{
//	int deg,min,sec;
//	Coord(int d=0,int m=0,int s=0):deg(d),min(m),sec(s){}
//	std::string toString()const;
//};
//ostream& operator<<(ostream&,const Coord&);
//class DataPoint{
//	std::time_t timestamp;
//	Coord latitude,longitude;
//	double depth,temprature;
//public:
//	DataPoint(std::time_t ts,const Coord& lat,const Coord &lon,double dep,double temp):timestamp(ts),latitude(lat),longitude(lon),depth(dep),temprature(temp){}
//	DataPoint():timestamp(0),depth(0),temprature(0){}
//	friend ostream&operator<<(ostream&,const DataPoint&);
//};
//std:: string IntToString(int a);
//#endif