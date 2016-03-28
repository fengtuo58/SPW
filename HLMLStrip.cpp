//
//#include<cassert>
//#include<cmath>
//#include<string>
//using namespace std;
//string& stripHTMLTags(string&s){
//	static bool inTag=false;
//	bool done=false;
//	while(!done){
//		if(inTag){
//			size_t rightPos=s.find('>');
//			if(rightPos!=string::npos){
//				inTag=false;
//				s.erase(0,rightPos+1);
//			}
//		else{
//			done=true;
//			s.erase();
//		}
//		}
//			else {
//				size_t leftPos=s.find('<');
//				if(leftPos!=string::npos){
//					size_t rightPos=s.find('>');
//					if(rightPos==string::npos){
//						inTag=done=true;
//						s.erase(leftPos);//initiate the first augument
//					}
//					else 
//						s.erase(leftPos,rightPos-leftPos+1);
//				}
//				else 
//					done=true;
//			}
//
//		}
//	}
//}
//	int main(int argc, char *argv[])
//	{
//		
//	}
