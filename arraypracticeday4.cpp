/*#include<iostream>
using namespace std;
int selection(int arr[],int n)
{
	for(int i=1;i<n;i++){
		int current=arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}cout<<"after sorting  :";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
int main()
{
	int n;
	cout<<"enter the size: ";
	cin>>n;
	int arr[n];
	cout<<"enter the array element ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selection(arr,n);
}*/

// { Driver Code Starts
/*#include<iostream>
using namespace std;
 // } Driver Code Ends
//User function template for C++
valueEqualToIndex(int arr[], int n) 
{
	cout<<"input key :";
	int key;
	cin>>key;
	    for(int i=1;i<n;i++)
		{
	        if(arr[i]==key)
	            return key;
		}
		return -1;
	}
int main()
{
	int n;  
	cout<<"enter the size :";  
	cin>>n;
	int arr[n];
	cout<<"enter array element :";
	cin>>arr[n];
	for(int i=0;i<n-1;i++)
	{
		cin>>arr[i];
	}
	cout<<valueEqualToIndex(arr,n);
}*/

/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int occurence(int arr[],int n,int key)
{
	int s=-1;
	int e=n-1;
	for(int i=0;i<n;i++)
	{
		if(key != arr[i])
			continue;
		if(s==-1)
			s=i;
		e=i;
	}
	if(s!=-1)
	{
		cout<<"first occurence is "<<s<<endl<<"second occurence is :"<<e;
	}
	else
	{
		cout<<"element not found ";
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,8,8,8,9,8,2};
	int n=sizeof(arr)/sizeof(int);
	int key=8;
	cout<<occurence(arr,n,key);
}*/

/*#include<iostream>
#include<math.h>
using namespace std;
countsquare(int n)
{
	int a=sqrt(n);
	if(n*n==a)
		return a-1;
	else
		return a;
}
int main()
{
	int n;
	cin>>n;
	cout<<countsquare(n);
}*/



