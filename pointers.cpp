/*#include<iostream>
using namespace std;
int main()
{
	int num=5;
	cout<<"adress of num is :"<<&num<<endl;
	
	int *ptr= &num;
	
	cout<<"the value is :"<<*ptr<<endl;
	cout<<ptr<<endl;
	
	double d=4.32;
	double *ptr2=&d;
	cout<<"the value is :"<<*ptr2<<endl;
	cout<<ptr2<<endl;
	
	cout<<"size of integer"<<sizeof(num)<<endl;
	cout<<"size of pointer"<<sizeof(ptr2)<<endl;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int i=5;
	
	int *q=&i;
	cout<<q<<endl;
	cout<<*q<<endl;
	
	int *p=0;
	p=&i;
	cout<<p<<endl;
	cout<<*p<<endl;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int a=n;
	a++;
	
	//cout<<n;
	
	int *p=&n;
	cout<<n<<endl;
	(*p)++;
	cout<<"after :"<<n<<endl;
	
	//copying a pointer
	int *q=p;
	cout<<p<<" "<<q<<endl;
	cout<<*p<<" "<<*q<<endl;
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int n=3;
	//int *ptr=0;
	//cout<<*ptr;
/*	int *ptr=&n;
	int *ptr2=ptr;
	cout<<ptr<<endl;
	cout<<ptr2;
	*/
	
/*	int *ptr=&n;
	cout<<n<<endl;
	(*ptr)++;
	cout<<ptr<<endl;
	cout<<n<<endl;

	int *ptr=&n;
	int *qptr=ptr;
	cout<<ptr<<" "<<qptr<<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(qptr)<<endl;

	cout<<*ptr*2;
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int n=3;
	int* ptr=&n;
	cout<<n<<endl;
	cout<<"value of ptr :"<<*ptr<<endl;
	cout<<"adress of ptr :"<<&ptr<<endl;
	cout<<"adress of n :"<<&n<<endl;
	(*ptr)++;
	cout<<n<<endl;
	cout<<(*ptr)<<endl;
	
	int* ptr2= ptr;
	cout<<*ptr2<<endl;
	
}*/


//-----------------------------------------------------------------------------------------------------
/*#include<iostream>
using namespace std;
int main()
{
	int n=10;
	int* ptr=&n;
	cout<<"value of x :"<<*ptr<<endl;
	cout<<"adress of x :"<<ptr<<endl;
	
	*ptr=20;
	cout<<"after the value : "<<*ptr<<endl;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int a[3]={10,20,30};
	int *ptr= a;
	for(int i=0;i<3;i++)
	{
		cout<<a<<endl;
		cout<<*a<<endl;
		ptr++;
	}
		
}*/

//array with pointer
/*#include<iostream>
using namespace std;
int main()
{
	/*
	int a[10]={22,122,41,67};
	cout<<a<<endl;	
	cout<<a[0]<<endl;
	cout<<&a[0]<<endl;
	cout<<*a<<endl;
	cout<<(*a)+1<<endl;
	cout<<*(a+1)<<endl;
	cout<<(*a)+1<<endl;
	cout<<a[2]<<endl;
	cout<<*(a+2)<<endl;
	
	int i=3;
	cout<<i[a]<<endl;
	
	
	int temp[10]={1,2,3,4};
	cout<<sizeof(temp)<<endl;
	cout<<sizeof(*temp)<<endl;
	cout<<sizeof(&temp)<<endl;
	
	int *ptr=&temp[0];
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(*ptr)<<endl;
	cout<<sizeof(&ptr)<<endl;
	
	int a[20]={1,2,3,4};
	cout<<&a[0]<<endl;
	cout<<&a<<endl;
	cout<<a<<endl;
	
	int *p=&a[0];
	cout<<*p<<endl;
	cout<<&p<<endl;
	cout<<p<<endl;*/
	
/*	int a[10]={1,2,3,4};
	int *p=&a[0];
	cout<<p<<endl;
	p=p+1;
	cout<<p;
*/
/*	int a[10]={1,2,3,4,5};
	int *p= &a[0];
	cout<<"adress of pointer"<<&p<<endl;
	cout<<p<<endl;
	cout<<*(p+1)<<endl;
	cout<<(*p)+1<<endl;
	cout<<p+1<<endl;
	cout<<(*p)+2<<endl;
	cout<<&p+1<<endl;

	
}
*/

/*#include<iostream>
using namespace std;
int main()
{
	char ch[6]="abcde";
	char* p=&ch[0];
	cout<<ch<<endl;
	cout<<p<<endl;
}*/


//pointers with function

/*#include<iostream>
using namespace std;
int print(int *p)
{
	cout<<*p<<endl;
}
void update(int *p)
{
	*p=*p+1;

}
int main()
{
	int a=4;
	int *p=&a;
	cout<<"before :"<<*p<<endl;
	update(p);
	cout<<"after :"<<*p<<endl;
}*/


/*#include<iostream>
using namespace std;
int getsum(int a[],int n)
{
	int sum=0;
	cout<<"sizee :"<<sizeof(a)<<endl;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
	
}
int main()
{
	int a[6]={1,2,3,4,5,9};
	//sum of whole array
	cout<<"the sum of given array :"<<getsum(a,6)<<endl;
	//sum of array from the given index / sum of part sending to the given function
	cout<<"the sum of given array :"<<getsum(a+2,4);
}*/


// swap using pointer
/*#include<iostream>
using namespace std;
int main()
{
	int a=20,b=10;
	int* p1=&a;
	int* p2=&b;
	cout<<"before swap"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
/*	int temp=*p1;
	*p1=*p2;
	*p2=temp;*/
	
/*	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;

	cout<<"after swap"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
	
}*/


//size of
//operand is datatype
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	char c;
	cout<<sizeof(n)<<endl;
	cout<<sizeof(c)<<endl;
}*/

//operand is class type
/*#include<iostream>
using namespace std;
class A{
	int n;
	char c[20];
};
int main()
{
	A a;
	cout<<sizeof(a)<<endl;
}*/


//operand is of array type
/*#include<iostream>
using namespace std;
int main()
{
	int a[4]={1,2,3,4};
	cout<<sizeof(a)<<endl;
}*/

//operand is of pointer type
/*#include<iostream>
using namespace std;
int main()
{
	int *p=new int(10);
	cout<<p<<endl;
	cout<<*p<<endl;
	char* ch=new char('a');
	cout<<ch<<endl;
	cout<<*ch<<endl;
}*/

//Arrays of pointer
/*#include<iostream>
using namespace std;
int main()
{
	int marks[10];
	int* ptr= marks;
	for(int i=0;i<10;i++)
		cin>>marks[i];
	cout<<*ptr<<endl;
	cout<<*marks<<endl;
}*/

//array of pointer to string 

/*#include<iostream>
using namespace std;
int main()
{
	char *name[5]={"AA","BB","CC","DD","EE"};
	for(int i=0;i<5;i++)
	{
		cout<<name[i]<<endl;
	}
}*/

//void pointer
/*#include<iostream>
using namespace std;
int main()
{
	int a=12;
	void*ptr=&a;
	cout<<&a<<endl;
	cout<<ptr<<endl;
	cout<<a<<endl;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int a=10;
	void *ptr=0;
	int *ptr1=(int*)ptr;
	cout<<"value of ptr1 :"<<ptr<<endl;
}*/

//REFRENCE
/*#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &ref=a;
	cout<<ref<<endl;
}*/

//References as aliases
/*#include<iostream>
using namespace std;
int main()
{
	int a=10;	
	int &b=a;
	int &c=b;
	cout<<a<<" "<<b<<" "<<c<<endl;
}*/

//initialization
/*#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &b=a;
	cout<<"value of a is :"<<a<<endl;
}*/

//function parameter as refrence

/*#include<iostream>
using namespace std;
int swapping(int &p,int &q)
{
	int temp=p;
	p=q;
	q=temp;
}
int main()
{
	int a=20;
	int b=10;
	cout<<a<<" "<<b<<endl;
	swapping(a,b);	
	cout<<a<<" "<<b<<endl;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n=10;
	int &ref=n;
	cout<<&ref<<endl;
	cout<<&n<<endl;
	
	int *p=&n;
	cout<<&p<<endl;
	cout<<&n<<endl;
}*/

//arithmatic operator
/*#include<iostream>
using namespace std;
int main()
{
/*	int a[]={1,2,3,4};
	int *p=a;
	cout<<*p<<endl;
	p=p+1;
	cout<<*p<<endl;
	*/
	
/*	int a=10;
	int &ref=a;
	&ref=&ref+2;
	cout<<ref<<endl;

}*/


//function pointer

/*#include<iostream>
using namespace std;
void pose()
{
	
}
int main()
{
	cout<<&main<<endl;
	cout<<&pose<<endl;
}*/

//calling function indirectly

/*#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int main()
{
	//int (*funcptr)(int,int)=&add;
	int (*funcptr)(int ,int );
	funptr=add;
	int sum=add(5,1);
	cout<<sum<<endl;
}*/

//passing function pointer as a parameter

/*#include<iostream>
using namespace std;
void func1()
{
	cout<<"function 1 called";
}
void func2(void (*funcptr)())
{
	funcptr();
}
int main()
{
	func2(func1);
}*/

//NEW AND DELETE OPERATOR
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int *a=new int[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	delete a;
}
