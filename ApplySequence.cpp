//#include<cstddef>
//#include<iostream>
//#include<vector>
//#include"ApplySequence.h"
//#include"Gromit.h"
//using namespace std;
//int main(){
//	vector<Gromit*>dogs;
//	for(size_t i=0;i<5;i++) dogs.push_back(new Gromit(i));
//	apply(dogs,&Gromit::eat,1.3f);//must explicitly declear the value is float;浮点型常量，默认是double型的。如果后缀加F或者f，则存储为float型
//	apply(dogs,&Gromit::sit);
//	apply(dogs,&Gromit::sleep,'z',3.0);
//}