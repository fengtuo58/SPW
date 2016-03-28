//
//#include<iostream>
//#include"List.h"
//using namespace std;
///****************************************************
//函数名：   list<T> *creat(link<T> *head)；
//函数功能： 创建链表并添加数据；
//输入：     data；
//输出：     *head；
//****************************************************/
//
//template <class T>
//typename list<T>link<T>::* creat(list<T> *head)
//{
//	int n=0;
//	list<T> *p1,*p2;                                       //创建指针并申请内存；
//	p1=new list<T>;                                        
//	p2=new list<T>;
//	cout<<"请输入结点数据："<<endl;
//	cin>>p1->data;
//	head=NULL;
//	while(p1->data != 0)                              //当输入数据为零时认为所有数据输入完毕，停止继续输入；
//	{
//		n=n+1;
//		if(n == 1)
//			head=p1;
//		else
//			p2->next=p1;
//		p2=p1;
//		p1=new list<T>;
//		cout<<"请输入结点数据："<<endl;
//		cin>>p1->data;
//	}
//	p2->next=NULL;
//	return(head);
//}