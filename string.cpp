//declare the string 

/*#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
	string x;
	cin>>x;
	cout<<x;
	
	string str="Abc";
	cout<<str;*/
	
	/*string str;
	string str(5,'n');
	
	/*string str;
	getline(cin,str);
	cout<<str;*/
	
	/*string str;
	string s1="i am";
	string s2=" gurjeet ";
	s1.append(s2);
	cout<<s1;*/
	
	/*string str;
	string s1="i am";
	string s2=" gurjeet ";
	cout<<s1+s2;*/
	
	/*string s1="i am ";
	string s2=" gurjeet ";
	cout<<s1[2];*/
	
	/*string abc="jhrabfakbf";
	abc.clear();
	cout<<abc;*/
	
	/*string s1="abc";
	string s2="xyz";
	cout<<s2.compare(s1)<<endl;*/
	
	/*string s1="abc",s2="abc";
	if(s2.compare(s1)==0)
		cout<<"equal";*/
		
	/*string s1="abc";
	cout<<s1<<endl;
	s1.clear();
	if(s1.empty())
		cout<<"string is empty";*/
		
	/*string s="abcdefgh";
	s.erase(3,1);
	cout<<s;*/
	
	/*string s="abcdefghijkl";
	cout<<s.find("def");*/
	
	/*string s="abcdefghi";
	s.insert(2," pqr ");
	cout<<s;*/
	
	/*string s="abcdefghijkl";
	cout<<s.size();*/
	
	/*string s="abcdefgh";
	for(int i=0;i<s.length();i++)
	{
		cout<<s[i]<<endl;
	}*/
	
	/*string s="abcdefghi";
	string s1=s.substr(2,4);
	cout<<s1<<endl;*/
	
	/*string s1="533";
	int x=stoi(s1);
	cout<<x+2;*/
	
	/*int x=232;
	cout<<to_string(x)+"2"<<endl;*/
	
	/*string s="snjfskjf";
	sort(s.begin(),s.end());
	cout<<s;
	
}*/


//convert in upper case letter

/*#include<iostream>
#include <string>
using namespace std;
int main()
{
	string s1="abdssjhdjshd";
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i] >='a' && s1[i] <='z')
		{
			s1[i]-=32;
		}
	}
	cout<<s1;
}*/

//convert in lower case letter(a-A==32)

/*#include<iostream>
using namespace std;
int main()
{
	string s1="HSDSJDSDJ";
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i] >= 'A' && s1[i] <= 'Z')
			s1[i]+=32;
	}
	cout<<s1;
}*/


//conversion in upper and lower by inbuilt function

/*#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
	string s="ddjkjfksbdkfsdb";
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<"upper : "<<s<<endl;
	
	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<"lower : "<<s;	
}*/

//biggest number from numeric string

/*#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
	string s="65849";
	sort(s.begin(),s.end(),greater<int>());
	cout<<s;
}*/

//max frequency of the string
/*#include<iostream>
using namespace std;
int main()
{
	string s="hdfaiioi";
	int arr[26];
	for(int i=0;i<26;i++)
		arr[i]=0;
	for(int i=0;i<s.length();i++)
		arr[s[i]-'a']++;
	char ans='a';
	int maxfrequency=0;
	for(int i=0;i<26;i++)
	{
		if(arr[i]>maxfrequency)
		{
			maxfrequency=arr[i];
			ans=i+'a';
		}
	}
	cout<<maxfrequency<<" "<<ans<<endl;
}
*/
//reverse string
/*#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
	string s="gurjeet";
	/*reverse(s.begin(),s.end());
	for(int i=s.length();i>=0;i--)
		cout<<s[i];
}*/

/*#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
/*	string s="noon";
	string v=s;
	reverse(s.begin(),s.end());
	if(s==v)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not";
	}
*/

	/*string s="noon";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s[s.length()-i-1])
			cout<<"no";
		else
			cout<<"yes";
	}
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char arr[n+1];
	cin>>arr;
	bool check=1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[n-1-i])
		{
			check=0;
			break;
		}
	}
	if(check==true)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not";
	}
}*/


//largest word in sentence
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char arr[n];
	cin.getline(arr,n);
	cin.ignore();
	int i=0;
	int curlength=0,maxlength=0;
	while(1)
	{
		if(arr[i] == ' ' || arr[i]=='\0')
		{
			if(curlength>maxlength)
			{
				maxlength=curlength;
			}
			curlength=0;
			
		}else
		{
			curlength++;
			if(arr[i]=='\0')
				break;
			i++;
		}
			
	}
	cout<<maxlength<<endl;
}*/

/*
reverse a string 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s="hii";
	int n=s.length()-1;
	for(int i=0;i<s.length()/2;i++)
	{
		swap(s[i],s[n]);
		n=n-1;
	}	cout<<s;
}*/

//string compression

/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="abbbbcad";
	int count;
	for(int i=0;i<s.length();i++)
	{
		count=1;
		for(int j=i+1;j<s.length();j++)
		{
			if(s[i]==s[j] && s[i]!=' ')
			{
				count++;
				s[j]='0';
			}
		}
		if(count>1 && s[i]!='0')
		{
			cout<<s[i];
		}
		return 0;
	}
}*/

//check if string are rttion of each other
/*#include<iostream>
using namespace std;
bool rotation(string s1,string s2)
{
	if(s1.length() != s2.length())
		return false;
	string temp=s1+s2;
	return(temp.find(s2) != string ::npos);
}
int main()
{
	string s1="hello",s2="loel";
	if(rotation(s1,s2))
	{
		cout<<"yes rotation";
	}
	else
	{
		cout<<"no rotation";
	}
}*/

//check whether string is valid suffle of or not
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool check(string s1,string s2,string s)
{
	if(s1.size()+s2.size() !=s.size())
	{
		return false;	
	}

sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
sort(s.begin(),s.end());
int i=0,j=0,k=0;
while(k<s.size())
{
	if(i<s1.length() && s1[i]==s[k])
		i++;
	else if(j<s2.length() && s2[j]==s[k])
		j++;
	else
		return false;
	k++;
}
return true;
}
int main()
{
	string s1,s2,s;
	cout<<"enter the string 1 and 2 :";
	cin>>s1>>s2;
	cout<<"enter the string to be checked :";
	cin>>s;
	if(check(s1,s2,s))
	{
		cout<<"valid";
	}
	else
	{
		cout<<"not valid";
	}
}

