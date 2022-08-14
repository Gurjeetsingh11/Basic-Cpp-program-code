//character string

/*#include<iostream>
using namespace std;
int main()
{
	char str[20];
	cin.getline(str,20);
	cout<<str;
}*/

//string concat
/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[10],str2[10];
	cin.getline(str1,10);
	cin.getline(str2,10);
	cout<<strcat(str1,str2);
}*/

//string length
/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[10];
	cin.getline(str,10);
	cout<<strlen(str);
}*/


//reverse string
/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[10];
	cin.getline(str,10);
	cout<<strrev(str);
}*/

//string copy
/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[10],str2[10];
	cout<<"string 1 :";
	cin.getline(str1,10);
	strcpy(str2,str1);
	cout<<"string 2 after copying :"<<str2;
}*/

//string compare 
/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[10],s2[10];
	cin.getline(s1,10);
	cin.getline(s2,10);
	cout<<strcmp(s2,s1);
}*/

//passing string as function
/*#include<iostream>
using namespace std;
void display(string st)
{
	cout<<"you entered : "<<st<<endl;
}
void display(char st[])
{
	cout<<"you entered "<<st<<endl;
}
int main()
{
	string str;
	char s[10];
	cout<<"enter the string :";
	getline(cin,str);
	cout<<"enter the char string ";
	cin.getline(s,10);
	
	display(str);
	display(s);
}*/

/*#include<iostream>
using namespace std;
int main()
{
	char s[10]={'h','a','p','p','y','!'};
	cout<<s.size();
}*/

//characeter string to integer
/*#include<iostream>
using namespace std;
int main()
{
	char s[10]={"123"};
	char s2[10]={"456"};
	int i=stoi(s);
	int j=stoi(s2);
	cout<<i+j<<endl;
}*/

//performing addition on string by user 
/*#include<iostream>
using namespace std;
int main()
{
	char s1[10];
	char s2[20];
	cin.getline(s1,10);
	cin.getline(s2,20);
	int i=stoi(s1);
	int j=stoi(s2);
	cout<<i+j<<endl;
}*/

//substring
/*#include<iostream>
using namespace std;
int main()
{
	string s="gurjeet";
	string p=s.substr(2,3);
	cout<<p<<endl;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	string s="abcd";
	int n=s.length();
	for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;
}*/


