//rotate matrix by 90* in clockwise direction
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
	cout<<"actual loop :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	//for transpose matrix
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<m;j++)
		{
			if(i!=j)
			{
				int temp=arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=temp;
			}
		}
	}
	//for rotated matrix
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m/2;j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[i][m-j-1];
			arr[i][m-j-1]=temp;
		}
	}
	cout<<"after rotation of matrix :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	
}*/

//rotate array by 90* in anticlockwise direction
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
	cout<<"array :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m/2;j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[i][m-j-1];
			arr[i][m-j-1]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<m;j++)
		{
			if(i!=j)
			{
				int temp=arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=temp;
			}
		}
	}
	cout<<"after anticlock wise 90 degree rotaion :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
}*/

// 1d array practice
//simple array input and output
/*#include<iostream>
using namespace std;
int main()
{

	int arr[10];
	cout<<"enter the element :";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"number : "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}	
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	cout<<"enter the numbers :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int num;
	cout<<"enter the number to check :";
	cin>>num;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			cout<<"present at :"<<i<<" index ";
		}

	}
}*/

/*#include<iostream>
using namespace std;
int main()
{
	
	int arr[5];
	cout<<"enter the array element :";
	for (int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for (int i=4;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;

}*/

//sum and multiple in array
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int arr[n];
	int mul=1;
	cout<<"enter the element :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		
		sum+=arr[i];
		
		mul*=arr[i];
	}
	cout<<"sum is :"<<sum<<endl;
	cout<<"mul is :"<<mul<<endl;
}*/

//initializing array
/*#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
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
}*/

//max and min im=n array
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	cout<<"enter array element :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxnum,minnum;
	for(int i=0;i<n;i++)
	{
		maxnum=max(maxnum,arr[i]);
		minnum=min(minnum,arr[i]);
	}
	cout<<"maximum of array is :"<<maxnum<<endl;
	cout<<"minimum of array is :"<<minnum;
}*/

//print element diagonally


/*1 2 3     
4 5 6   -  1 4 2 7 5 3 8 6 9
7 8 9   */     
/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	cout<<"enter the array element :";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"array element :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	cout<<"printing element diagonally "<<endl;
	
	for(int i=0;i<n+m-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				if(j+k==i)
				{
					cout<<arr[k][j]<<" ";
				}
			}
		}
	}cout<<endl;
}*/

//diagonally printing
/*
1 2 3 
4 5 6    - 1 4 2 3 5 7 8 6 9
7 8 9*/

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[m][n];
	cout<<"enter the array element :";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"traversal of array :"<<endl;
	int j,k,i;
	if(j+k==i)
	{
		for(int i=0;i<m+n-1;i++)
		{
			for(int j=0;j<m;j++)
			{
				for(int k=0;k<n;k++)
				{
					if(i%2!=0)
					{
						cout<<arr[j][k]<<" ";
					}
					else
					{
						cout<<arr[k][j];
					}
				}
			}
		}
		cout<<endl;
}
}*/


//spiral traversal
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

	int left=0,top=0,bottom=n-1,right=m-1;
	while(top<=bottom && left<=right)
	{
		for(int i=left;i<=right;i++)
		{
			cout<<arr[top][i]<<" ";
		}top++;
		for(int i=top;i<=bottom;i++)
		{
			cout<<arr[i][right]<<" ";
		}right--;
		if(left<=right)
		{
			for(int i=right;i>=left;i--)
			{
				cout<<arr[bottom][i]<<" ";
			}bottom--;
		}
		if(top<=bottom)
		{
			for(int i=bottom;i>=top;i--)
			{
				cout<<arr[i][left]<<" ";
			}left++;
		}
}
}*/


//find median in row wise sorted array 
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
	int min,max;
	for(int i=0;i<n;i++)
	{
		if(arr[i][0]<min)
			min=arr[i][0];
		if(arr[i][m-1]>max)
			max=arr[i][m-1];
	}
	int num=(n*m+1)/2;
	while(min<max)
	{
		int mid=min+(max-min)/2;
		int count=0;
		for(int i=0;i<n;i++)
			count+=upperbound(arr[i],arr[i]+m,mid)-arr[i];
		if(count<num)
			min=mid+1;
		else
			max=mid;
	}
}
*/

//search in row wise and column wise sorted matrix
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
	int x;
	cin>>x;
	
	int i=0,j=n-1;
	while(i<n && j>=0)
	{
		if(arr[i][j]==x)
		{	
			cout<<"found at "<<i<<" "<<j<<" index "<<endl;
		}
		
		if(arr[i][j]>x)
			j--;
		else
			i++;
	}
}*/

//max number of 1s in matrix
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
	int max=0;
	int index=-1;
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==1)
			{
				count++;
			}
			if(count>max)
			{
				max=count;
				index=i;
			}
		}
	}cout<<index;
 }
*/
 
 
//max profit - stock buy or sell 1 time
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
	int maxprofit=0;
	int minbefore=arr[0];
	for(int i=0;i<n;i++)
	{
		minbefore=min(minbefore,arr[i]);
		int profit=arr[i]-minbefore;
		maxprofit=max(maxprofit,profit);
	}
	cout<<maxprofit;
}
*/

//max buy and sell n times 
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
	int profit=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[i-1])
		{
			profit+=(arr[i]-arr[i-1]);
		}
	}
	cout<<"max profit :"<<profit;
}*/

//Rain water trapping problem

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
	int left[]=new int[n];
	int right[]=new int[n];
	left[0]=arr[0];
	for(int i=0;i<n;i++)
	{
		left[i]=max(left[i-1],arr[i]);
	}
	
	right[n-1]=arr[n-1];
	for(int i=n-1;i>=0;i--)
	{
		right[i]=max(right[i+1],arr[i]);
	}
	
	int res=0;
	for(int i=0;i<n;i++)
	{
		res=min(left[i],right[i])-arr[i];
	}
	cout<<res;
}*/

