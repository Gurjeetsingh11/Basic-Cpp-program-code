/*#include<iostream>
using namespace std;
int main()
{
	int arr[4]={10,20,30,40};
	cout<<arr[3]<<endl;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size :";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of array :";
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxnum;
	int minnum;
	for(int i=0;i<n;i++)
	{
		maxnum=max(maxnum,arr[i]);
		minnum=min(minnum,arr[i]);
	}
	cout<<"max :"<<maxnum<<"min"<<minnum<<endl;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	
	int arr[10];
	for(int i=0;i<10;i++)
	{
		arr[i]=i+100;
		
	}
	for(int j=0;j<10;j++)
	{
		cout<<j<<" - "<<arr[j]<<endl;
	}	
}*/

/*#include<iostream>
using namespace std;
int linearsearch(int n,int arr[],int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<linearsearch(n,arr,key)<<endl;
}*/

/*#include<iostream>
using namespace std;

int Binary(int[],int,int);
int main()
{
int ar[50],n,key;
cout<<"Enter number of elements=";
cin>>n;
cout<<"Enter Array's Elements=";
for(int i=0;i<n;i++)
cin>>ar[i];
cout<<"Enter element which to be searched=";
cin>>key;

int pos=Binary(ar,n,key);

if(pos==-1)
cout<<"Element not Found";
else
cout<<"Element Found at="<<(pos+1);

return 0;
}


int Binary(int ar[],int n,int key)
{
int s,e,mid;
s=0;
e=n-1;
while(s<=e)
{
mid=(s+e)/2;
if(key==ar[mid])
return mid;
else if(key<ar[mid])
e=mid-1;
else
s=mid+1;
}    
return -1;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int pos;
	cin>>pos;
	int element;
	cin>>element;
	if(pos>n)
	{
		cout<<"invalid";
	}
	else
	{
		for(int i=n-1;i>pos-1;i--)
		{
			arr[i+1]=arr[i];
			arr[pos-1]=element;
		}
		cout<<"element after insertion :";
		for(int i=0;i<=n;i++)
			cout<<arr[i]<<" ";
	}
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size :";
	cin>>n;
	int arr[n];
	cout<<"enter the elements of array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int pos;
	cout<<"enter the index position  :";
	cin>>pos;
	if(pos>n+1)
	{
		cout<<"deletion not possible ";
	}
	else
	{
		for(int i=pos-1;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		cout<<"array after deletion : ";
		for(int i=0;i<n-1;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}*/


