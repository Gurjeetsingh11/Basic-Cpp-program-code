//row wise sum // column wise sum // all element sum


/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	//inderting element in matrix 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	//displaying element of matrix
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	//sum of all element in matrix
	/*int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sum+=arr[i][j];
		}
	}cout<<"sum of element in matrix :"<<sum;*/
	
	//row wise sum
	/*for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=arr[i][j];
		}cout<<"row wise sum :"<<sum<<endl;
	}*/
	
	//column wise sum
	/*for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=arr[j][i];
		}cout<<sum;
	}*/
	
	//transpose of matrix
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[j][i]<<" ";
		}cout<<endl;
	}
}*/


//diagonal right and left sum

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
	/*int sum=0;
	for(int i=0;i<n;i++)
	{
		m=m-1;
		for(int j=0;j<n;j++)
		{
			if(j==m)
				sum+=arr[i][j];
		}
	}cout<<"left sum :"<< sum;*/
/*	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==j)
			{
				sum+=arr[i][j];
			}
		}
	}cout<<"right sum :"<<sum;
}
*/

//product of 2 matrix

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int A[n][m];
	int B[n][m];
	int mul[n][m];
	cout<<" enter for A matrix :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
		}	
	}
	cout<<" enter for B matrix :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>B[i][j];
		}	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			mul[i][j]=0;
			for(int k=0;k<m;k++)
			{
				mul[i][j]+=A[i][k]*B[k][j];
			}
		}	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<mul[i][j]<<" ";
		}	cout<<endl;
	}
}	*/

//sum of two matrix

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int A[n][m];
	int B[n][m];
	int sum[n][m];
	cout<<"for A :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
		}
	}
		cout<<"for B :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sum[i][j]=A[i][j]+B[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<sum[i][j]<<" ";
			if(j=m-1)
			{
				cout<<endl;
			}
		}
	}	
}*/


//upper half and lower half
/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	/*cout<<"lower traingle of matrix :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i<j)
				cout<<" "<<" ";
			else
				cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"upper triangle of matrix :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i>j)
			{
				cout<<" "<<" ";
			}
			else
			{
				cout<<arr[i][j]<<" ";
			}
		}cout<<endl;
	}
}*/


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
		}cout<<endl;
	}
	cout<<"for middle coulumn :";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i][m/2]<<" ";
	}cout<<endl;
	cout<<"for middle row :";
	for(int j=0;j<m;j++)
	{
		cout<<arr[n/2][j]<<" ";
	}cout<<endl;
}
