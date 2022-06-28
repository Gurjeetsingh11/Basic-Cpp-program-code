//related to 2d array  & 3d array ....

//accessing 2d array element.
/*#include<iostream>
using namespace std;
int main()
{
	int arr[3][2]={{0,1},{2,3},{4,5}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"element at x["<<i<<"]["<<j<<"] : ";
			cout<<arr[i][j]<<endl;
		}
	}
}*/


//accessing 3d array element
/*#include<iostream>
using namespace std;
int main()
{
	int x[2][3][2]={{0,1}, {2,3}, {4,5}, {6,7}, {8,9}, {10,11}};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<2;k++)
			{
			cout<<"element at x["<<i<<"]["<<j<<"]["<<k<<"]:";
			cout<<x[i][j][k]<<endl;
			}
		}
	}
}*/


//to print a matrix taking matrix element as input
/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	//taking array element input
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	//printing array element
	cout<<"matrix is :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}*/

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
		}
		cout<<endl;
	}
	int key;
	cin>>key;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==key)
				cout<<i<<" "<<j<<endl;
				flag=true;
		}
	}
	if(flag)
		cout<<"element found";
	else
		cout<<"element not found";
}*/

/*
#include<iostream>
using namespace std;
int main()
{
	//array element...
	
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	//spiral form matrix
	int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
	while(row_start<=row_end && col_start <= col_end)
	
	//for column start
	for(int i=col_start;i<=col_end;i++)
	{
		cout<<arr[row_start][i]<<" ";
	}
	row_start++;
	
	//for column end
	for(int i=row_start;i<row_end;i++)
	{
		cout<<arr[i][col_end]<<" ";
	}col_end--;
	
	// for row_end
	for(int i=col_end;i>=col_start;i--)
	{
		cout<<arr[row_end][i]<<" ";
	}
	row_end--;
	
	//for col start
	for(int i=row_end;i>=row_start;i--)
	{
		cout<<arr[i][col_start]<<" ";
	}
	col_start--;
}
*/


//row wise sum

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
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=arr[i][j];
		}
		cout<<"sum "<<sum;
	}
	cout<<endl;
}*/


//column wise sum
/*#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cin>>row>>col;
	int arr[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	
	for(int i=0;i<col;i++)
	{
		int sum=0;
		for(int j=0;j<row;j++)
		{
			sum+=arr[j][i];
		}
		cout<<"sum is: "<<sum<< endl;
	}	
}*/

