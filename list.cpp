//
//#include<iostream>
//#include"List.h"
//using namespace std;
///****************************************************
//��������   list<T> *creat(link<T> *head)��
//�������ܣ� ��������������ݣ�
//���룺     data��
//�����     *head��
//****************************************************/
//
//template <class T>
//typename list<T>link<T>::* creat(list<T> *head)
//{
//	int n=0;
//	list<T> *p1,*p2;                                       //����ָ�벢�����ڴ棻
//	p1=new list<T>;                                        
//	p2=new list<T>;
//	cout<<"�����������ݣ�"<<endl;
//	cin>>p1->data;
//	head=NULL;
//	while(p1->data != 0)                              //����������Ϊ��ʱ��Ϊ��������������ϣ�ֹͣ�������룻
//	{
//		n=n+1;
//		if(n == 1)
//			head=p1;
//		else
//			p2->next=p1;
//		p2=p1;
//		p1=new list<T>;
//		cout<<"�����������ݣ�"<<endl;
//		cin>>p1->data;
//	}
//	p2->next=NULL;
//	return(head);
//}