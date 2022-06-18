/*#include<iostream>
using namespace std;
void pattern()
{
	int n;
	cout<<"enter the number of rows";
	cin>>n;
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
	pattern();
	pattern();
	pattern();
	pattern();
	
}*/

/*#include<iostream>
using namespace std;
int pow(int num,int po=3)
{
	int res=1;
	for(int i=0;i<po;i++)
	{
		res=res*num;
	}
	return res;
}
int main()
{
	int n,p;
	cout<<"enter the number:";
	cin>>n;
	cout<<"enter the power :";
	cin>>p;
	cout<<"result :"<<pow(n);
	
}*/

/*#include<iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
		fact=fact*i;
	return fact;
}
int main()
{
	int n;
	cout<<"enter the number for factorial :";
	cin>>n;
	cout<<"factorial of number is :"<<factorial(n);
}*/

/*#include<iostream>
using namespace std;
float division(float a,float b)
{
	float res=a/b;
	return res;
}

int main()
{
	float a,b;
	cout<<"enter the first number :";
	cin>>a;
	cout<<"enter the second number: ";
	cin>>b;
	cout<<"division of "<<a <<" & "<<b<<" is :"<<division(a,b);
}*/

/*#include<iostream>
using namespace std;
char capital(char arr[10],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]>='A' && arr[i]<='Z')
			return arr[i];
	}
}
int main()
{
	int n=10;
	char arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"the first capital letter is :"<<capital(arr,n);
}*/

/*#include<iostream>
using namespace std;
bool check(int n)
{
	if(n<2)
		return true;
	for(int i=2;i*i<=n;i++)
	{
		if((n%i)==0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cout<<"enter the number to check :";
	cin>>n;
	if(check(n))
	{
		cout<<"is prime number "<<endl;
	}
	else
	{
		cout<<"is not prime"<<endl;
	}
	
}*/

/*#include<iostream>
using namespace std;
int sum(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int main()
{
	int a,b;
	cout<<"enter two values for sum ";
	cin>>a>>b;
	cout<<"sum of two numbers is  "<<sum(a,b);
}*/

/*#include<iostream>
using namespace std;
double square(double n)
{
	double tot;
	tot=n*n;
	return tot;
}
int main()
{
	double n;
	cout<<"enter the number for square :";
	cin>>n;
	cout<<"square of number is : "<<square(n);
}*/

/*#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	cout<<"enter the first number to swap :";
	cin>>a;
	cout<<"enter the second number to swap :";
	cin>>b;
	cout<<"number before swap:"<<a<<","<<b<<endl;
	swap(a,b);
	cout<<"number after swap :"<<a<<","<<b;
	
}*/

/*#include<iostream>
using namespace std;
int factorial(int n)
{
	int num=0,fact=1;
	while(num<=n-1)
	{
		fact=fact+fact*num;
		num++;
	}
	return fact;
}
int main()
{
	int sum;
	sum=factorial(1)/1+factorial(2)/2+factorial(3)/3+factorial(4)/4+factorial(5)/5;
	cout<<sum;
}*/

/*#include<iostream>
using namespace std;
int convert(int dec)
{
	long bin=0,rem,f=1;
	while(dec!=0)
	{
		rem=dec%2;
		bin=bin+rem*f;
		f=f*10;
		dec=dec/2;
	}
	return bin;
	
}
int main()
{
	int dec,bin;
	cout<<"enter the decimal number :";
	cin>>dec;
	dec=convert(bin);
	cout<<"after coversion, binary number is :"<<dec;
}*/

/*#include<iostream>
using namespace std;
int armstrong(int n)
{
	int id,sum=0,num=n;
	while(num!=0)
	{
		id=num%10;
		sum=sum+id*id*id;
		num=num/10;
	}
	return(n==sum);
}
int perfect(int n)
{
	int i,sum=0,num;
	for (int i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	return (n==sum);
}
int main()
{
	int n;
	cout<<"enter the number to check armstrong and perfect number :";
	cin>>n;
	if(armstrong(n))
		cout<<"it is armstrong number "<<endl;
	else
		cout<<"it is not armstrong number"<<endl;
	if(perfect(n))
		cout<<"it is perfect number "<<endl;
	else
		cout<<"it is not perfect number "<<endl;
}*/

#include<iostream>
using namespace std;
long long fact(int num)
{
	if(num==0)
		return 1;
	else
		return (num*fact(num-1));
}
int strong(int first,int last)
{
	long sum=0;
	int num=first;
	while(first !=last)
	{
		while(num!=0)
		{
			sum=sum+fact(num*10);
			num=num/10;
		}
		if(first==sum)
		{
			cout<<first;
		}
		first++;
	}
}

int main()
{
	int first,last;
	cout<<"enter the first number :";
	cin>>first;
	cout<<"enter the last number :";
	cin>>last;
	
}
