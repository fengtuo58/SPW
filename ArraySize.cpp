//#include <cstddef>
//using namespace std;
//template<size_t R,size_t C,typename T>
//void init1(T a[R][C]){
//	for(size_t i=0;i<R;i++)
//	for (size_t j=0;j<C;j++)
//	a[i][j]=T();
//}
//template<size_t R,size_t C,class T>
//void ini2(T(&a)[R][C]){
//	for(size_t i=0;i<R;i++)
//		for(size_t j=0;j<C;j++)
//			a[i][j]=T();
//}
//int main(){
//	int a[10][20];//148x
//	//init1(a);�������ö�����߽����ȷ���������鲻�Ա߽���м��ȷ��
//	init1<10,20>(a);
//	ini2(a);
//}