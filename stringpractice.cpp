//print the entered string 
/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cout<<s;
	
}
*/

//count the occurence of letter
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	char ch[50],c;
	cout<<"enter the string :";
	cin>>ch;
	cout<<"enter the character fir the count :";
	cin>>c;
	int count=0;
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==c)
			count++;
	}
	if(count==0)
	{
		cout<<"sorry";
	}
	else
	{
		cout<<"the occurence of "<<c<<" is :"<<count <<endl;
	}
}*/

//length of string
/*#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cout<<s.length();
}*/

/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(s1.compare(s2)==0)
	{
		cout<<"equal";
	}
}*/


//string reverse..
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	/*string s;
	cin>>s;
	reverse(s.begin(),s.end());
	cout<<s;
	
	string s;
	cin>>s;
	int strt=0;
	int end=s.length()-1;
	while(strt<end)
	{
		swap(s[strt++],s[end--]);
	}
	cout<<s;
}*/

//concatenation

/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<s1+s2;
}*/

//count number of digit,consonent,vowel,spaces
/*#include<iostream>
using namespace std;
int main()
{
	char line[50];	
	
	int vowel,cons,space,digit;
	vowel=cons=space=digit=0;
	cout<<"enter the string :";
	cin>>line;
	for(int i=0;line[i] != '\0';i++)
	{
		if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i] =='E' ||line[i]=='I' ||line[i]=='O'||line[i]=='U')
			vowel++;
		else if((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z'))
			cons++;
		else if(line[i]>='0' && line[i]<='9')
			digit++;
		else if(line[i]==' ')
			space++;
	}
	cout<<"vowel:"<<vowel<<endl;
	cout<<"consonent :"<<cons<<endl;
	cout<<"digit :"<<digit<<endl;
	cout<<"space :"<<space<<endl;
	
}*/

//print only alpabet remove character

/*
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')))
			s[i]='\0;
	}
	cout<<s;
}*/

//print only character remove alphabet
/*#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if((s[i]>'a' && s[i]<'z')|| (s[i]>='A' && s[i]<='Z'))
			s[i]='\0';
	}
	cout<<s;
}*/

//print string lexecogrphicall order

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number fo string to be printed in lexiographical :";
	cin>>n;
	string str[n],temp;
	for(int i=0;i<n;i++)
	{
		cout<"enter the string :";
		cin>>str[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;	
			}
			
		}	
	}cout<<"after the sorting  :";
	for(int i=0;i<n;i++)
	{
		cout<<str[i]<<endl;
	}	
}*/

//swap 2 strings

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i=0,j=0;
	char s1[20],s2[20],temp[20];
	cout<<"enter the string 1 and 2 :";
	cin>>s1>>s2;
	while(s1[i]!='\0')
	{
		temp[j]=s1[i];
		i++;
		j++;
	}
	temp[j]='\0';
	i=0,j=0;
	while(s2[j]!='\0')
	{
		s1[j]=s2[i];
		i++;
		j++;
	}
	s1[j]='\0';
	i=0,j=0;
	while(temp[j] !='\0')
	{
		s2[j]=temp[i]; 
		i++;
		j++;
	}
	s2[j]='\0';
	cout<<"after the swapping string 1 nd 2 :"<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
}
*/

//upper case character to lower case
/*#include<iostream>
using namespace std;
int main()
{
	char ch,ch1;
	cin>>ch;
	/*ch1=32+ch;
	//ch1=65-ch;
	cout<<ch1;
}*/


//upper case string to lower case string and vice versa
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="GurJeEt";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<='z')
			s[i]-=32;
	}

	cout<<s<<endl;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A' && s[i]<='Z')
			s[i]+=32;
	}
	cout<<s;
}*/

//remove or delete space from string
/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
/*	string s="gurjeet singh";
	remove(s.begin(),s.end(),'');
	cout<<s;
	
	char str1[20],str2[20];
	gets(str1);
	strcpy(str2,str1);
	int len=strlen(str1);
	for(int i=0;i<len;i++)
	{
		if(str1[i]==' ')
		{
			for(int j=i;j<len;j++)
			{
				str1[j]=str1[j+1];
			}
			len--;
		}
	}
	cout<<str1;	
}*/

//count number of word in the string
/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20],count=0;
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]==' ')
			count++;
	}
	cout<<count+1;
}*/


//remove vomel from string
/*
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20];
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' ||str[i]=='I' ||str[i]=='O' || str[i]=='U')
			{
				for(int j=i;j<len;j++)
				{
					str[j]=str[j+1];
				}
			len--;
			i--;
			}
	}
	cout<<"string after deletion :"<<str;
}
*/


//substirng present in group

/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20],substr[20];
	gets(str);
	gets(substr);
	int temp,i,j;
	for(int i=0;str[i]!='\0';i++)
	{
		j=0;
		if(str[i]==substr[j])
		{
			temp=i+1;
			while(str[i]==substr[j])
			{
				i++;
				j++;
			}
			if(substr[j]=='\0')
			{
				cout<<temp;
			}
			else
			{
				i=temp;
				temp=0;
			}
		}
	}
	if(temp==0)
	{
		cout<<"not present";
	}
}
*/


//upper to lower
/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	string s="gurjeet";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<='z')
			s[i]-=32;
	}
	cout<<s;
}*/
/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::toupper);
	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s;
}*/

//number of frequency

/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	string s="abbbbababbab";
	int arr[26];
	for(int i=0;i<26;i++)
	{
		arr[i]=0;
	}
	for(int i=0;i<s.size();i++)
	{
		arr[s[i]-'a']++;
	}
	char ans='a';
	int maxfr=0;
	for(int i=0;i<26;i++)
	{
		if(arr[i]>maxfr)
			maxfr=arr[i];
			ans=i+'a';
	}
	cout<<maxfr;
}*/

/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	char a[20];
	gets(a);
	int count=0;
	for(int i=0;a[i]!='\0';i++)
	{
		count++;
	}
	cout<<count;	
}*/

/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	string s="gurjeet";
	int n=s.length()-1;
	for(int i=0;i<s.length()/2;i++)
	{
		swap(s[i],s[n]);
		n=n-1;
	}
	cout<<s;
	string s="gurur";
	reverse(s.begin(),s.end());
	cout<<s;
}*/

/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	/*string s;
	cin>>s;
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
	
	int n;
	cin>>n;
	char p[n];
	int s=0,e=n-1;
	if(p[s]!=p[e])
	{
		return 0;
	}
	else
	{
		s++;
		e--;
	}
}*/

//remove the part from position
/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	string s="abcsccbcsabcsba";
	cout<<s<<endl;
	string part;
	cin>>part;
	while(s.length() !=0 && s.find(part)<s.length())
	{
		s.erase(s.find(part),part.length());
	}
	cout<<s;
}*/

//check rotation of string
/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	if(s1.length() != s2.length())
		cout<<"no its not";
	else
	{
		string temp=s1+s2;
		if(temp.find(s2) != string::npos)
			cout<<"yes";
		else
			cout<<"no";
	}
}
*/
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="gurjeet";
	for (int i = 1; i < s.size(); i++)
    	swap(s[i-1], s[i]);
  	cout<<s;
}*/

//valid suffle
/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	string s;
	cin>>s;
	int l1=s1.length();
	int l2=s2.length();
	int rl=s.length();
	int i=0,j=0,k=0;
	while(k<rl)
	{
		if(i<l1 && s1[i]==s[k])
			i++;
		else if(j<l2 && s2[j]==s[k])
			j++;
		else
			k++;
	}
	if(i<l1 || j<l2)
	{
		cout<<"no";
	}
	else
	{
		cout<<"yes";
}
}*/

/*//longest palindrome
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int max=1,start=0;
	for(int i=0;i<str.length();i++)
	{
		for(int j=0;j<str.length();j++)
		{
			int flag=1;
			for(int k=0;k<(j-i-1)/2;k++)
				if(str[i+k]!=str[j-k])
					flag=0;
			if(flag && (j-i+1)>max)
			{
				start=i;
				max=j-i+1;
			}
		}
	}
	for(int i=start;i<start+max-1;i++)
		cout<<str[i];
}*/
