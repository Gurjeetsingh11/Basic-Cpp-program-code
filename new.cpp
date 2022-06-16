/*
kelvin->farenheit conversion

#include<iostream>
using namespace std;  
int main()
{
	float k,frh;
	cout<<"enter the temperature in kelvin ";
	cin>>k;
	frh=(9.0/5)*(k-273.15)+32;
	cout<<"temperature in farenheit: "<<frh;
}*/

/*
kelvin -> celcius conversion
#include<iostream>
using namespace std;  
int main()
{
	float k,cel;
	cout<<"enter the temperature in kelvin :";
	cin>>k;
	cel=k-273.15;
	cout<<"temperature in celcius is :"<<cel;
}*/

/*farenhiet to kelvin conversion 
#include<iostream>
using namespace std;  
int main()
{
	float frh,k;
	cout<<"enter the temperature in farenhiet : ";
	cin>>frh;
	k=(5.0/9)*(frh-32)+273.15;
	cout<<"temperature in kelvin is :"<<k;
}*/


/*celcius to kelvin temperature
#include<iostream>
using namespace std;  
int main()
{
	int cel,kel;
	cout<<"enter the celcius temperature :";
	cin>>cel;
	kel=273.15+cel;
	cout<<"the temperature in kelvin is : "<<kel;
}*/

/*area of scalene triangle
#include<iostream>
using namespace std; 
#define PI 3.14 
int main()
{
	int s1,s2,as,ang;
	cout<<"enter the side 1 ";
	cin>>s1;
	cout<<"enter the side 2 ";
	cin>>s2;
	cout<<"enter the angle 1 :";
	cin>>ang;
	as=(s1*s2*sin((PI/180)*ang))/;
	cout<<"area of scalen triangle :"<<as;
}*/

/*compute dividend and divisor
#include<iostream>
using namespace std;  
int main()
{
	int q,r,de,di;
	cout<<"enter the dividend :";
	cin>>de;
	cout<<"enter the divisor : ";
	cin>>di;
	q=de/di;
	r=de%di;
	cout<<"the quotient of divident and divisor is :"<<q<<endl;
	cout<<"the remainder of divident and divisor is :"<<r;
}*/

/*total and average of number
#include<iostream>
using namespace std;  
int main()
{
	float a,b,c,d,tot,avg;
	cout<<"enter the four number : ";
	cin>>a>>b>>c>>d;
	tot=a+b+c+d;
	avg=(a+b+c+d)/4;
	cout<<"the total of numbers are: "<<tot<<endl;
	cout<<"the average of number are :"<<avg;
}*/

/*print basic pattern by cout and cin
#include<iostream>
using namespace std;  
int main()
{
	int x;
	cout<<"enter the number for pattern :";
	cin>>x;
	cout<<x <<" "<< x <<endl;
	cout<<x <<" "<< x <<endl;
	cout<<x <<" "<< x <<endl;
	cout<<x <<" "<< x <<endl;
	cout<<x<<x<<x<<x;
}*/

/*check number is negative positive or zero
#include<iostream>
using namespace std;  
int main()
{
	int x;
	cout<<"enter the number :";
	cin>>x;
	if(x==0)
		cout<<"entered number is zero";
	else if(x<0)
		cout<<"the entered number is negative";
	else
		cout<<"entered number is positive";
}*/

/*divide 2 number basic
#include<iostream>
using namespace std;  
int main()
{
	int x,y;
	cout<<"enter the two number :";
	cin>>x>>y;
	cout<<"the quoteient of numbers is :"<<x/y;	
}*/

/* multiplication table 
#include<iostream>
using namespace std;  
int main()
{
	int x;
	cout<<"enter the number for table :";
	cin>>x;
	for(int i=1;i<=10;i++)
	{
		cout<<x<<" * "<<i<<" = "<<x*i<<endl;
	} 
}*/

/*reverse the string basic
#include<iostream>
using namespace std;  
int main()
{
	char fname[10],lname[10];
	cout<<"enter the first name :";
	cin>>fname;
	cout<<"enter the last name : ";
	cin>>lname;
	cout<<fname<<lname<<endl;
	cout<<"in reverse order :"<<endl;
	cout<<lname <<fname;
}*/

/*circumfrence of circle
#include<iostream>
using namespace std;
#define PI 3.14  
int main()
{
	float r,c,a;
	cout<<"enter the radius for circumference :";
	cin>>r;
	c=2.0*PI*r;
	a=PI*r*r;
	cout<<"the circumference of circle is :"<<c<<endl;
	cout<<"the area of circle is "<<a;
}*/

/*volume of sphere
#include<iostream>
using namespace std; 
#define PI 3.14 
int main()
{
	double r,vol;
	cout<<"enter the radius ";
	cin>>r;
	vol=(4*PI*r*r*r)/3;
	cout<<"volume :"<<vol;
}*/

/*swapping without 3rd variable
#include<iostream>
using namespace std;  
int main()
{
	int a,b;
	cout<<"enter the number for swapping :"<<endl;
	cin>>a>>b;
	cout<<"before swapping :"<<endl;
	cout<<"a"<<a<<"b"<<b<<endl;
	b=a+b;
	a=b-a;
	b=b-a;
	cout<<"after swapping : "<<endl;
	cout<<"a:"<<a<<"b:"<<b;
}*/

/*conversion cm->m and c->km
#include<iostream>
using namespace std;  
int main()
{
	double c,m,k;
	cout<<"enter the centimeter to be converted: ";
	cin>>c;
	m=c/100;
	k=c/100000;
	cout<<"the coverted value of cm to m :"<<m<<endl;
	cout<<"the converted value of cm to k:"<<k;
}*/

/*find third side from 2 sides 
#include<iostream>
using namespace std;  
int main()
{
	int a1,a2,a3;
	cout<<"enter the two sides : ";
	cin>>a1>>a2;
	a3=180-(a1+a2);
	cout<<"the third angle is : "<<a3;
}*/

/*simple intrest question
#include<iostream>
using namespace std;  
int main()
{
	double p,r,t,si;
	cout<<"enter the principle :";
	cin>>p;
	cout<<"enter the rate :";
	cin>>r;
	cout<<"enter the time :";
	cin>>t;
	si=(p*r*t)/100;
	cout<<"simple interest"<<si;
}*/

/*reverse first and last digit of number
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
	
}*/

/*add all number given from 1 to n
#include<iostream>
#include<math.h>
using namespace std;  
int sum(int n)
{
	int tot=0;
	for(int i=1;i<=n;i++)
		tot=tot+i;
	return tot;
	
}
int main()
{
	cout<<sum(4)<<endl;
	cout<<sum(100);
}*/

/*Factorial of given number
#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int n;
	cout<<"enter the number : ";
	cin>>n;
	cout<<"factorial : "<<fact(n)<<endl;
	
}*/
