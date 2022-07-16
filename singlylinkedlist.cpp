//linked list traversal

/*#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
};
int print(Node* n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
	
	head=new Node();
	second=new Node();
	third=new Node();
	
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	
	print(head);
	
}*/

//insertion in linked list
/*#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	Node(int d);
	data=d;
	head=NULL;
	
};
void insertAthead(Node* &head,int data)
{
	Node* n=new Node(data);
	n->next=head;
	head=n;
	
}
void print(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
}
int main()
{
	Node* head=NULL;
	insertAthead(head,5);
	insertAthead(head,6);
	insertAthead(head,7);
	insertAthead(head,8);
}*/

/*#include <iostream>
using namespace std;

//Creating Node Structure
class Node{
	public:
	 int data;
	 Node *link;
};
//creating head pointer and equating to NULL
Node *head=NULL;

//Function to insert at the beginning of linked list
void insertBeg (int d)
{
 Node *ptr = new Node();
 ptr->data=d;
 ptr->link=head;
 head=ptr;
}
//Function to insert at the end of linked list
void insertEnd (int d)
{
  Node *ptr = new Node();
  ptr->data=d;
  ptr->link=NULL;

  //If list is empty
  if(head==NULL)
  head=ptr;
  //else list is not empty
  else
  {
   Node *temp = head;
   while(temp->link != NULL)
   {
    temp=temp->link;
   }
   temp->link=ptr;

  }

}
//Function to display linked list
void dispLink()
{
 Node *temp=head;
 while(temp!=NULL)
 {
  cout<<temp->data<<" ";
  temp=temp->link;
 }
 cout<<"\n";
}
//Main Function
int main()
{
 insertBeg(2);
 insertBeg(1);
 insertEnd(3);
 dispLink();
 return 0;
}*/

/*#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* link;
};
int main()
{
	Node* head= NULL;
	Node* second=NULL;
	head=new Node();
	second=new Node();
	head->data=2;
	head->link=second;
	second->data=3;
	second->link=NULL;
	cout<<"the data is :"<<head->data<<" "<<second->data;
	
}*/


//insertion at the beginning and the end

/*#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* link;
};

Node *head=NULL;
void insertbeg (int d)
{

 Node *ptr = new Node();
 ptr->data=d;
 ptr->link=head;
 head=ptr;
}

void insertend(int d)
{
	Node* ptr=new Node();
	ptr->data=d;
	ptr->link=NULL;
	if(head==NULL)
		ptr=head;
	else
	{
		Node*temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}temp->link=ptr;

	}
		}
void display()
{
	Node* temp= head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
int main()
{

	insertbeg(2);
	insertbeg(3);
	insertend(4);
	display();
}*/

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

/*#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
	~Node()
	{
		int value=this->data;
		if(this->next!=NULL)
		{
			delete next;
			this->next=NULL;
		}
		cout<<"MEmber is free fro Node with data with :"<<value<<endl;
	}
};

void inserthead(Node* &head,int d)
{
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
}
void insertmid(Node* &head,int position,int d)
{
	Node* temp=head;
	int count=1;
	while(count<position-1)
	{
		temp=temp->next;
		count++;
	}
	Node* nodeinsert=new Node(d);
	nodeinsert->next=temp->next;
	temp->next=nodeinsert;
}
void inserttail(Node* &tail,int d)
{
	Node* temp=new Node(d);
	tail->next=temp;
	tail=temp;
}
void deletenode(int position,Node* &head)
{
	if(position==1)
	{
		Node* temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;
	}
	else
	{
		Node* curr=head;
		Node* prev=NULL;
		
		int count=1;
		while(count<position)
		{
			prev=curr;
			curr=curr->next;
			count++;
		}
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
	}
}
print(Node* &head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}cout<<endl;
}
int main()
{
	Node* node1=new Node(10);
	Node* head=node1;
	Node* tail=node1;
	print(head);
	inserttail(tail,12);
	
	print(head);
	insertmid(head,1,14);
	
	print(head);
	inserthead(head,9);	
	
	print(head);
	inserttail(tail,18);
	
	print(head);
	cout<<"head"<<head->data<<endl;
	cout<<"tail"<<tail->data<<endl;
	
	deletenode(2,head);
	print(head);
}*/
