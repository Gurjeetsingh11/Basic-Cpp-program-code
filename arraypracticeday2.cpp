/*#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
		return sum;
}
int main()
{
	int n;
	cout<<"enter the size :";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"sum of array element is :"<<sum(arr,n);
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of array :";
	cin>>n;
	int arr[n];
	cout<<"enter the array element :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxnum;
	for(int i=0;i<n;i++)
	{
		maxnum=max(maxnum,arr[i]);
	}
	cout<<"maxnum is  :"<<maxnum;
}*/

/*#include <bits/stdc++.h>
using namespace std;
void largest(int arr[], int n)
{
    int a, b, c;
 
    
    if (n < 3)
    {
        cout << " Invalid Input ";
        return;
    }
 
    c=a=b=INT_MIN;
    for(int i = 0; i < n; i++)
    {
         
        if (arr[i] > a)
        {
            c = b;
            b = a;
            a = arr[i];
        }
 
        
        else if (arr[i] > b)
        {
            c = b;
            b = arr[i];
        }
 
        else if (arr[i] > c)
            c = arr[i];
    }
 
    cout << "Three largest elements are "<< a << " " << b << " "
        << c << endl;
}
 
int main()
{
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the array element ";
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
     
    largest(arr, n);
    return 0;
}*/



/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] > arr[i])
                count++;
 
        if (count >= 2)
            cout << arr[i] << " ";
    }
}
	
int main()
{
	int n;
	cout<<"enter the size :";
	cin>>n;
	int arr[n];
	cout<<"enter the array element :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	findElements(arr,n);	
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size :";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int s=0;
	int e=n-1;
	while(s<=e)
	{
		swap(arr[s],arr[e]);
		s++;
		e--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}*/

/*#include<iostream>
using namespace std;
double Mean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
 
    return sum /n;
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
	cout<<"mean :"<<Mean(arr,n)<<endl;
}*/

/*#include<iostream>
using namespace std;
int triplet(int arr[],int n, int sum)
{
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(arr[i]+arr[j]+arr[k]==sum)
				{
					cout<<"triplet is : "<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
				}
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int sum=20;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<triplet(arr,n,sum);
}*/

/*#include<iostream>
using namespace std;
int majority(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int majoritycount=1;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				majoritycount+=1;
			}
			if(majoritycount > (n/2))
			{
				return arr[i];
			}
		}
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
	cout<<majority(arr, n);
}*/

/*#include<iostream>
using namespace std;
int equilibrium(int arr[], int n)
{
    int ls, rs;
    for (int i = 0; i < n; ++i)
    {    
        ls = 0;
        for (int j = 0; j < i; j++)
            ls += arr[j];
        rs = 0;
        for (int j = i + 1; j < n; j++)
            rs += arr[j];
        if (ls == rs)
            return i;
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
	cout<<equilibrium(arr,n);
}*/
