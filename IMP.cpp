// REVERSE A GIVEN DIGIT

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int reverse=0,rem;
	while(n)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	cout<<reverse;
}*/

// FABBONACCI SERIES UPTO NTH TERM
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0,b=1;
	cout<<a<<b;
	int next;
	for(int i=2;i<n;i++)
	{
		next=a+b;
		a=b;
		b=next;
		cout<<next;
	}	
}*/

//GCD OF NUMBER
/*#include<iostream>
using namespace std;
int gcd(int x,int y)
{
	if(x==0)
	{
		cout<<y;
	}
	if(y==0)
	{
		cout<<x;
	}
	if(x==y)
	{
		cout<<x;
	}
	else if(x>y)
	{
		cout<<gcd(x-y,y);
	}
	cout<<gcd(x,x-y);

}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<gcd(x,y);
	return 0;
}*/

//PERFECT NUMBER OR NOT
/*#include<iostream>
using namespace std;
int main()
{
	int div,n,total=0;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		div=n%i;
		if(div == 0)
		{
			total+=i;
		}
	}
	if(total == n)
	{
		cout<<"yes perfect number";
	}
	else
	{
		cout<<"Not perfect number ";
	}
}*/


//anagram
/*#include<iostream>
using namespace std;
int main()
{
	string s1="bro";
	string s2="rob";
	int flag=0;
	int count1[26]={0};
	int count2[26]={0};
	
	for(int i=0;i<s1.size();i++)
	{
		count1[s1[i]-'a']++;
	}
	for(int i=0;i<s2.size();i++)
	{
		count2[s2[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(count1[i]!=count2[i])
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"not";
	}
	else
	{
		cout<<"yes";
	}
}*/

//PALINDROME STRING
/*#include<iostream>
using namespace std;
int main()
{
	string s="gurjeet";
	int n=s.size();
	int count=0,i;
	for( i=0;i<n/2;i++)
	{
		if(s[i] == s[n-i-1])
		{
			count++;
		}
	}
	if(count == i)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}*/

/*#include<iostream>
using namespace std;
bool ispalindrome(int n)
{
	int rev=0;
	int rem,temp;
	n=temp;
	while(temp)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(n==rev)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int arr[6]={1, 121, 55551, 545545, 10111, 90};
	int res=INT_MIN;
	int n=6;
	for(int i=0;i<n;i++)
	{
		if(ispalindrome(arr[i]) && res<arr[i])
		{
			res=arr[i];
		}
	}
	if(res==INT_MIN)
	{
		res=-1;
	}
	cout<<res;
}*/

//FACTORIAL 
/*#include<iostream>
using namespace std;
int main()
{
	int fact=1;
	int n;
	cin>>n;
	if(n<0)
	{
		cout<<"false";
	}
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
}*/

//ARMSTRONG
/*#include<iostream>
using namespace std;
int main()
{
	int num=153;
	int rem,temp,sum=0;
	temp=num;
	while(num)
	{
		rem=num%10;
		sum+=(rem*rem*rem);
		num/=10;
	}
	if(temp==sum)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}*/

//sum of nth natural numbers
/*#include<iostream>
using namespace std;
int getsum(int n)
{
	if(n==0)
	{
		return n;
	}
	return n+getsum(n-1);
}
int main()
{
	int n;
	cin>>n;
	int sum=getsum(n);
	cout<<sum;
}*/

// check if string is palindrome or not
/*#include<iostream>
using namespace std;
bool isaplindrome(string s)
{
	int i=0;
	int j=s.size()-1;
	while(i<j)
	{
		if(s[i++]!=s[j--])
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
int main()
{
	if(isaplindrome("abba"))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}*/


/*#include<iostream>
using namespace std;
int main()
{
	char c;
	cin>>c;
	if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}*/

//AUTOMORPHIC NUMBEr
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sq=n*n;
	int flag=0;
	while(n)
	{
		if(n%10 != sq%10)
		{
			flag=1;
			break;
		}
		n/=10;
		sq/=10;
	}
	if(flag==1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}*/

//to get ascii value
/*#include<iostream>
using namespace std;
int main()
{
	char c;
	cin>>c;
	cout<<(int)c;
}*/

//remove all characer from string
/*#include<iostream>
using namespace std;
int main()
{
	string s="P&ra+$BHa;;t*ku, ma$r@@s#in}gh";
	int j=0;
	for(int i=0;i<s.size();i++)
	{
		if((s[i]>='A' && s[i]<='Z') ||(s[i]>'a' && s[i]<'z'))
		{
			s[j++]=s[i];
		}
	}
	cout<<s.substr(0,j);
}*/

//remove special character from the string
/*#include<iostream>
using namespace std;
int fibo(int n)
{
	if(n<=1)
	{
		return n;
	}
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<fibo(n);
}*/
