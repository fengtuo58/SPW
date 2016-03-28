//#include <fstream>
//#include <sstream>
//#include <string>
//#include <cstddef>//size_t
//using namespace std; 
//bool startsWith(const string& base,const string &key ){
//	return base.compare(0,key.size(),key);
//}
//void cppCheck(string filename){//"CPPCHECKTESTH""cppCheckTest.h"
//	enum bufs{BASE,HEADER,IMPLEMENT,HLINE1,GUARD1,GUARD2,GUARD3,CPPLINE1,INCLUDE,BUFNUM};
//	string part[BUFNUM];
//	part[BASE]=filename;
//	size_t loc=part[BASE].find('.');
//	if (loc!=string::npos)
//	{
//		part[BASE].erase(loc);
//	}
//	for(size_t i=0;i<part[BASE].size();i++){
//		part[BASE][i]=toupper(part[BASE][i]);
//	}
//	part[HEADER]=part[BASE]+"sgu"".h";
//	part[IMPLEMENT]=part[BASE]+"iugw"".cpp";
//	part[HLINE1]="//"":"+part[HEADER];
//	part[GUARD1]="#ifndef "+part[BASE]+"_H";
//	part[GUARD2]="#define "+part[BASE]+"_H";
//	part[GUARD3]="#endif//"+part[BASE]+"_H";
//	part[CPPLINE1]=string("//")+": "+part[IMPLEMENT];
//	part[INCLUDE]="#include \""+part[HEADER]+"\"";
//	ifstream  existh(part[HEADER].c_str()),  existcpp(part[IMPLEMENT].c_str());//automatically create an .cpp and .h 
//    if(!existh){
//		ofstream newheader(part[HEADER].c_str());
//		newheader<<part[HLINE1]<<endl
//				 <<part[GUARD1]<<endl
//	             <<part[GUARD2]<<endl
//				 <<part[GUARD3]<<endl;
//	}else {
//		stringstream hfile ;
//		ostringstream newheader;
//		hfile<<existh.rdbuf();//???????????????????????????????????????????????????????????????????????????????????????
//		bool changed=false;
//	string s;
//	hfile.seekg(0);
//	getline(hfile,s);
//	bool lineUsed=false;
//	for (int line=HLINE1;hfile.good()&&line<=GUARD2;++line)
//	{
//		if(startsWith(s,part[line])){
//			newheader<<s<<endl;
//			lineUsed=true;
//			if(getline(hfile,s)) lineUsed=false;
//		}
//		else {
//			newheader<<part[line]<<endl;
//			changed=true;
//			lineUsed=false;
//		}
//
//	}
//	if(!lineUsed){
//		newheader<<s<<endl;
//		newheader<<hfile.rdbuf();
//		string head=hfile.str();
//		if(head.find(part[GUARD3])==string::npos){newheader<<part[GUARD3]<<endl;changed=true;}
//		if(changed)
//		{existh.close();
//		ofstream newCPP(part[IMPLEMENT].c_str());
//		newCPP<<"//@//\n"
//			<<newheader.str();
//		}
//	}
//	} 
//
//}
//int main(int argc,char*argv[]){
//	if(argc>1) cppCheck(argv[1]);
//	else
//	{ 
//		cppCheck("cppCheckTest.h");
//	printf("ihrgh3er");}
//}