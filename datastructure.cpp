//#include <iostream>
//using namespace std;
// struct Link{
//Link():data(0),Pnext(0){}
//Link(int i,Link*p=0):data(i),Pnext(p){}
//int data;
//Link*Pnext;
//};
// Link* head(0),*pend(0),*temp(0);
//Link*creatLink(){
//	int data;
//	/*Link* head(0),* end(0),*temp(0);*/
//	bool Initiated(true);
//	while(cin>>data,data){
//		if(Initiated){ 
//			pend=new Link(data);
//			head=pend;
//			Initiated=false;
//		}
//		else {
//			 temp=new Link(data);
//			 pend->Pnext=temp;
//			 pend=temp;
//
//		}
//	}
//	pend=pend->Pnext;
//	return head;
//}
//int main(){
//	
//	creatLink();
//	temp=head;
//	int i(0);
//	while (temp!=pend)
//	{   
//		i++;//count
//		cout<<temp->data
//			<<endl;
//		temp=temp->Pnext;
//
//	}
//	cout<<"the sum of link is"<<i;
//	return 0;
//}