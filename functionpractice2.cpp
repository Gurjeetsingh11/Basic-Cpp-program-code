/*#include<iostream>
#include<math.h>
using namespace std;
bool prime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(prime(i))
			cout<<i<<endl;
	}
}*/

/*#include<iostream>
using namespace std;
int fib(int n)
{
	int t1=0,t2=1,nt;
	for(int i=1;i<=n;i++)
	{
		cout<<t1<<endl;
		nt=t1+t2;
		t1=t2;
		t2=nt;
	}
}
int main()
{
	int n;
	cin>>n;
	fib(n);
}*/

/*#include<iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int n;
	cin>>n;
	cout<<factorial(n);
}*/

/*#include<iostream>
using namespace std;
int fact(int n)
{
	int f=1;
	for(int i=2;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n,r;
	cin>>n>>r;
	int ans=fact(n)/(fact(r)*fact(n-r));
	cout<<ans;
}*/

/*#include<iostream>
using namespace std;
int fact(int n)
{
	int f=1;
	for(int i=2;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
		}
		cout<<endl;
}
}*/

/*#include<iostream>
using namespace std;
int sum(int n)
{
	int ans=0;
	for(int i=1;i<=n;i++)
		ans=ans+i;
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<sum(n);	
}*/

/*#include<iostream>
using namespace std;
bool check(int a,int b,int c)
{
	int x=max(a,max(b,c));
	int y,z;
	if(x==a)
	{
		y=b;
		z=c;
	}
	else if(x==b)
	{
		x=b;
		z=c;
	}
	else
	{
		y=a;
		z=b;
	}
	if(x*x==y*y + z*z)
		return true;
	else
		return false;
	
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(check(a,b,c))
	{
		cout<<"pythogorian triplet "<<endl;
	}
	else
	{
		cout<<"not a pythagorian triplet";
	}
}*/

/*#include<iostream>
using namespace std;
int binarytodecimal(int n)
{
	int ans=0;
	int x=1;
	while(n>0)
	{
		int y=n%10;
		ans=ans+(x*y);
		x*=2;
		n=n/10;
	}
	return ans;
}
int octaltodecimal(int n)
{
	int ans=0;
	int x=1;
	while(n>0)
	{
		int y=n%10;
		ans=ans+x*y;
		x*=8;
		n=n/10;
	}
	return ans;
}
int decimaltobinary(int n)
{
	int x=1;
	int ans=0;
	while(x<=n)
		x=x*2;
		x/=2;
	while(x>0)
	{
		int lastdigit=n/x;
		n=n-lastdigit*x;
		x/=2;
		ans=ans*10+lastdigit;
	}
	return ans;
}
int decimaltooctal(int n)
{
	int x=1;
	int ans=0;
	while(x<=n)
		x=x*8;
		x/=8;
	while(x>0)
	{
		int lastdigit=n/x;
		n=n-lastdigit*x;
		x/=8;
		ans=ans*10+lastdigit;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"enter the number to convert :";
	cin>>n;
	cout<<decimaltooctal(n)<<endl;
}*/


