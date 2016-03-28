//#include <cassert>
//#include <cstddef>
//#include<cstdio>
//#include <cstdlib>
//#include <fstream>
//#include <iostream>
//#include <string>
//using namespace std;
//#if defined(__GUNC__)||defined(__MWERKS__)
//#include<sys/stat.h>
//#elif defined(__BORLANDC__)||defined(__MSC__VER)||defined(__DMC__)
//#include <direct.h>
//#else 
//#error Compiler not supported
//#endif
//bool exists(string fname){
//	size_t len=fname.length();
//	if(fname[len-1]!='/'&&fname[len-1]!='\\')  fname.append("/");
//	fname.append("000.tmp");//open temp file to determine whether the file exist
//	ofstream outf(fname.c_str());
//	bool existFlag=outf;
//	if(outf){
//		outf.close();
//	    remove(fname.c_str());//delete some file
//	}
//	return existFlag;
//
//}
//int main(int argc,char* argv[]){
//	if (argc==1) {
//		cerr<<"usage:extractCode file [dir]"<<endl;
//		exit(EXIT_FAILURE);
//	}
//	ifstream inf(argv[1]);
//	if(!inf) {
//		cerr<<"usage:extractCode file [dir]"<<endl;
//	}
//	string root("./");
//		if(argc==3) {
//			root=argv[2];
//			if(!exists(root)){
//				cerr<<"no such directory:"<<root<<endl;
//			}
//		}
//		size_t rootLen=root.length();
//		if(root[rootLen-1]!='/'&&root[rootLen-1]!='\\') root.append("/");
//		string line;
//		bool inCode=false;
//		bool printDelims=true;
//		ofstream outf;
//		while(getline(inf,line)){
//         size_t findDelim=line.find("//","/:~");
//		 if(findDelim!=string::npos) {
//			 if(!inCode){
//				 cerr<<"Lines out of order"<<endl;
//			 exit(EXIT_FAILURE);
//			 }
//			 assert(outf);
//			 if(printDelims) outf<<line<<endl;
//			 outf.close();
//			 inCode=false;
//			 printDelims=true;
//		 }else {
//			 findDelim=line.find("//"":");
//			 if(findDelim==0){
//			    if(line[3]=='!'){
//					printDelims=false;
//					++findDelim;
//				}
//				size_t startOfSubdir=line.find_first_not_of("\t",findDelim+3);
//				findDelim=line.find(':',startOfSubdir);
//				if(findDelim==string::npos)  {cerr<<"missing filename information"<<endl;
//				exit(EXIT_FAILURE);
//			 }
//				string subdir;
//				if(findDelim>startOfSubdir)
//					subdir=line.substr(startOfSubdir,findDelim-startOfSubdir);
//				size_t startOfFile=findDelim+1;
//				size_t endOfFile=line.find_first_not_of("\t",startOfFile);
//				if(endOfFile==startOfFile){
//					cerr<<"missing filename "<<endl;
//				  exit(EXIT_FAILURE);
//				}
//				string fullPath(root);
//				if(subdir.length()>0)
//					fullPath.append(subdir).append("/");
//		       assert(fullPath[fullPath.length()-1]=='/') ;
//			   if(!exists(fullPath)) 
//#if defined(__GUNC__)||defined(__MWERKS__)
//mkdir(fullPath.c_str(),0);
//#else mkdir(fullPath.c_str())
//#endif
//  fullPath.append(line.substr(startOfFile,endOfFile-startOfFile));
//			   outf.open(fullPath.c_str());
//			   if(!outf){
//				   cerr<<"error opening "<<fullPath<<"for output"<<endl;
//				   exit(EXIT_FAILURE);
//
//		 }
//			   inCode=true;
//			   cout<<"processing "<<fullPath<<endl;
//			   if(printDelims) outf<<line<<endl;
//		}
//			 else if(inCode){
//				 assert(outf);
//				 outf<<line<<endl;
//			 }
//			 exit(EXIT_FAILURE);
//}
//		}