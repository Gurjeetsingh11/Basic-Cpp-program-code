
//insertion at head,tail and at any position in doublylinkedlist....
//deletion at head ,tail and at any position in dll

#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* prev;
		Node* next;
	
	Node(int d)
	{
		this->data=d;
		this->prev=NULL;
		this->next=NULL;
	}
	~Node()
	{
		int val=this->data;
		if(next!=NULL)
		{
			delete next;
			next= NULL;
		}
		cout<<"memory free for node with data :"<<val<<endl;
	}
};

void inserthead(Node* &tail, Node* &head,int d)
{
	if(head==NULL)
	{
		Node* temp=new Node(d);
		head=temp;
		tail=temp;
	}
	else
	{
		Node* temp=new Node(d);
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
	}

void inserttail(Node* &tail, Node* &head, int d)
{
	if(tail==NULL)
	{
		Node* temp=new Node(d);
		tail=temp;
		head=temp;
	}
	else
	{
		Node* temp=new Node(d);
		tail->next=temp;
		temp->prev=tail;
		tail=temp;		
	}
}
void insertpos( Node* &tail,Node* &head, int pos,int d)
{
	if(pos==1){
		inserthead(head,tail,d);		
	}
	Node* temp=head;
	int count=1;
	while(count<pos-1)
	{
		temp=temp->next;
		count++;
	}
	if(temp->next==NULL)
	{
		inserttail(head,tail,d);
	}
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert;
	nodetoinsert->prev=temp;
	
}
void deletenode(int pos,Node* &head)
{
	if(pos==1)
	{
		Node* temp = head;
		temp->next->prev = NULL;
		head=temp->next;
		temp->next=NULL;
		delete temp;
	}
	else
	{
		Node* curr=head;
		Node* prev=NULL;
		
		int count=1;
		while(count<pos)
		{
			prev=curr;
			curr=curr->next;
			count++;
		}
		curr->prev=NULL;
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
	}

}
void print(Node* &head)
{
	Node* temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	//Node* node1=new Node(10);
	Node* head=NULL;
	Node* tail=NULL;
	print(head);
	
	inserthead(tail,head,11);
	print(head);
	
	inserthead(tail,head,13);
	print(head);
	
	inserthead(tail,head,8);
	print(head);
	
	inserttail(tail,head,25);
	print(head);
	
	insertpos(tail,head,2,100);
	print(head);
	
	insertpos(tail,head,1,101);
	print(head);
	
	insertpos(tail,head,6,102);
	print(head);
	
	deletenode(7,head);
	print(head);
}
