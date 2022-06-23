/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}*/

/*#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int sortwave(int arr[],int n)
{
	swap(arr,arr+n);
	for(int i=0;i<n-1;i++)
	{
		swap(&arr[i],&arr[i+1]);
	}
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
	
	sortwave(arr,n);
	for(int i=0;i<n;i++)
	{
	cout<<arr[i]<<" ";
}
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
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
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
	int count=1;
	while(count<n)
	{
		for(int i=0;i<n-count;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];p
				arr[i+1]=temp;
			}
		}
		count++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
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
	for(int i=1;i<n;i++)
	{
		int current=arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;
		}arr[j+1]=current;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
}*/
