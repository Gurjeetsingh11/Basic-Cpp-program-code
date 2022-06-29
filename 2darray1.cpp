//largest row sum
/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	int index=-1;
	int max=0;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=arr[i][j];
		}
		if(sum>max)
		{
			max=sum;
			index=i;
		}
	}
	cout<<"max sum is : "<<max<<endl;
	cout<<"present at index :"<<index;
}	*/

//sine wave form

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<m;j++)
			{
				cout<<arr[i][j]<<" ";
			}
		}
		else
		{
			for(int j=m-1;j>=0;j--)
			{
				cout<<arr[i][j]<<" ";
			}
		}
	}
}*/

// linear search in 2d array
/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	int key;
	cin>>key;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==key)
				cout<<"element found at :["<<i<<"]["<<j<<"] "<<endl;
		}
	}	
}*/


//print matrix diagonally
/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int i=0,j=0;
	bool isup=true;
	for(int k=0;k<n*n;)
	if(isup)
	{
		for(;i>=0;j<n;j++,i++)
		{
			cout<<arr[i][j]<<" ";
			k++;
		}
		if(i<0 && j<n-1)
			i=0;
		if(j==n)
			i=i+2;
			j--;	
	}
	else
	{
		for(;j>=0 && j<n;i++,j--)
		{
			cout<<arr[i][j];
		}
	}
}*/


//set matrix zeros
/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int x=1;
	int y=1;
	for(int i=0;i<n;i++)
	{
		if(arr[0][i]==0)
			return x=0;
	}
	for(int j=0;j<m;j++)
	{
		if(arr[j][0]==0)
		{
			return y=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(arr[i][j]==0)
			{
				arr[0][i]=0;
				arr[j][0]=0;
			}
		}
	}
	for(int i=1;i<n;i++)
	{
		if(arr[0][i]==0)
		{
			for(int j=1;j<m;j++)
			{
				arr[i][j]=0;
			}
		}
	}
	for(int j=1;j<m;j++)
	{
		if(arr[j][0]==0)
		{
			for(int i=0;i<n;i++)
			{
				arr[i][j]=0;
			}
		}
	}
	if(y==0)
	{
		for(int j=0;j<m;j++)
		{
			arr[j][0]=0;
		}
	}
	if(x==0)
	{
		for(int i=0;i<n;i++)
		{
			arr[0][i]==0;
		}
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
}*/


