//#include"DataLogger.h"
//#include <iomanip>
//#include<sstream>
//#include <string>
//using namespace std;
//ostream&operator <<(ostream &os,const Coord &c){
//	return os<<c.deg<<"*"<<c.min<<"\'"<<c.sec<<"\"";
//
//}
//std:: string IntToString(int a){
//	std::ostringstream s;
//	s<<a;
//	return s.str();
//
//}
//string Coord ::toString()const {
//	ostringstream os;
//	os<<*this;
//	return os.str();
//}
//ostream & operator<<(ostream &os,const DataPoint& d){
//	os.setf(ios::fixed,ios::floatfield);
//	char fillc=os.fill('0');
//	tm*tdata=localtime(&d.timestamp);
//	os<<setw(2)<<tdata->tm_mon+1<<'\\'
//		<<setw(2)<<tdata->tm_mday<<'\\'
//		<<setw(2)<<tdata->tm_year+1900<<' '
//		<<setw(2)<<tdata->tm_hour<<' :'
//		<<setw(2)<<tdata->tm_min<<':'
//		<<setw(2)<<tdata->tm_sec;
//	os.fill(' ');
//	streamsize prec=os.precision(4);
//	os<<"Lat:"<<setw(9)<<d.latitude.toString()
//		<<",long"<<setw(9)<<d.longitude.toString()
//		<<",depth"<<setw(9)<<d.depth
//	<<",temp: "<<setw(9)<<d.temprature;
//os.fill(fillc);
//os.precision(prec);
//return os;
//		
//}
//
