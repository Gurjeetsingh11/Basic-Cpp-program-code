// selection sort 
//insertion sort 
//quick sort

//selection sort
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n-1;i++)
	{
		int minindex=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[minindex]>a[j])
				minindex=j;
		}
		swap(a[minindex],a[i]);
	}	
	
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
}*/

//bubble sort

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}*/

//insertion sort
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		int j=i-1;
		for(;j>=0;j--)
		{
			if(a[j] > temp)
				a[j+1]=a[j];
			else
				break;
		}
		a[j+1]=temp;
	}
	
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}*/

