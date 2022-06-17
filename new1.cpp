/*
swapping first and last digit of number:
#include<iostream>
#include<math.h>
using namespace std;  
int main()
{
	int n,first,last,digit,divide;
	cout<<"enter the digit :";
	cin>>n;
	digit=log10(n);    //log10(n)=4.323int =4
	divide=pow(10,digit); //10000
	first=n/divide;
	n=n%divide;
	last=n%10;//12345%10-5
	n=n/10;
	int swap=last*divide+n*10+first;//52341
	cout<<"number after swapping first and last :"<<swap;	
}
*/

/*
Armstrong number 
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter the number to check :";
	cin>>n;
	int temp=n;
	while(temp!=0)
	{
		int ldigit=temp%10;
		sum=sum+(ldigit*ldigit*ldigit);
		temp=temp/10;
	}
	if(sum==n)
		cout<<"it is armstrong number ";
	else
		cout<<"it is not armstrong number ";
}*/

/*
MULTIIPLICATION TABLE
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number for multiplication :";
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;	
	}
}
*/

/*#include<iostream>
using namespace std;
int main()
{
	double p,r,t,si;
	cout<<"enter the principle :";
	cin>>p;
	cout<<"enter the rate : ";
	cin>>r;
	cout<<"enter the time :";
	cin>>t;
	si=(p*t*r)/100;
	cout<<"simple interest is :"<<si;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int a1,a2,a3,a4,a5;
	cout<<"enter the numbers :";
	cin>>a1>>a2>>a3>>a4>>a5;
	//double result=(a1+a2+a3)/3;
	double result=(a1+a2+a3+a4+a5)/5;
	cout<<result;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int a,res;
	cout<<"enter the number :";
	cin>>a;
	res=a*a*a;
	cout<<"cube :"<<res;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number :";
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<i;
		}
	}
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the numbers to check";
	cin>>a>>b;
	if(a>b)
		cout<<a<<"is greater";
	else
		cout<<b<<"is greater";
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number :";
	cin>>n;
	if(n%2==0)
		cout<<"number is even";
	else
		cout<<"number is odd";
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number :";
	cin>>n;
	if((n%5==0) && (n%11==0))
		cout<<"number is divisible by 5 and 11";
	else
		cout<<"not divisible";
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the three numbers";
	cin>>a>>b>>c;
	if(a>b && a>c)
		cout<<a<<"is greater";
	else if(b>a && b>c)
		cout<<b<<"is greater";
	else
		cout<<c<<"is greater";
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number to check :";
	cin>>n;
	if(n%2!=0)
		cout<<"its odd number ";
	else
		cout<<"its even number ";
}*/

/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int b,p=1,e;
	cout<<"enter the base and exponential values :";
	cin>>b>>e;
	for(int i=1;i<=e;i++)
		p=p*b;
	cout<<"power :"<<p;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	cout<<sizeof(int)<<endl;
	cout<<sizeof(double)<<endl;
	cout<<sizeof(float)<<endl;
	cout<<sizeof(char)<<endl;
}*/

/*#include<iostream>
using namespace std;
void loop(int n)
{
	if(n<=100)
		cout<<n<<endl;
		loop(n+1);
}
int main()
{
	int n=1;
	loop(n);
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int sp,cp,amt;
	cout<<"enter the selling price :";
	cin>>sp;
	cout<<"enter the cost price :";
	cin>>cp;
	if(sp>cp)
	{
		amt=sp-cp;
		cout<<"profit: "<<amt;
	}
	else if(cp>sp)
	{
		amt=cp-sp;
		cout<<"loss: "<<amt;	
	}
	else
		cout<<"no profit no loss";
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int even=0,odd=0,first,last;
	cout<<"enter the first value :";
	cin>>first;
	cout<<"enter the last value :";
	cin>>last;
	for(int i=first;i<=last;i++)
	{
		if(i%2==0)
		{
			even=even+i;
		}
		else
		{
			odd=odd+i;
		}
	}
	cout<<"sum of odd values are :"<<even;
	cout<<"sum of even values are :"<<odd;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of terms :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<i*2;
	}
}*/

/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of odd terms :";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		cout<<2*i-1;
	}
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter the number :";
	cin>>x;
	int res=x*x;
	cout<<res;
}*/

/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float x;
	cout<<"enter the number for quare root :";
	cin>>x;
	float res=sqrt(x);
	cout<<"result :"<<res;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of terms :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<i*2<<endl;
	}
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,r,avg;
	cout<<"enter the number for sum :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
		avg=sum/n;
	}
	cout<<"avg :"<<avg;
	cout<<"sum :"<<sum;
	
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n,even=0,odd=0;
	cout<<"enter the number :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			even=even+i;
		}
		else
		{
			odd=odd+i;
		}
	}
	cout<<"sum of even number :"<<even;
	cout<<"sum of odd number :"<<odd;
}*/
