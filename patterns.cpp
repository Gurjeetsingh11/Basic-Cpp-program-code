//PATTERN  QUESTIONS
//RECTANGLE
/*
#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	cin>>rows>>cols;
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=cols;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
*/

//HOLLOW RECTANGLE
/*#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cin>>row>>col;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(i==1 || i==row || j==1 || j==col)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}*/

//INVERTED PYRAMID
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}*/

//HALF PYRAMID AFTER 180 rotaion
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=n-i)
			{
				cout<<"  ";
			}
			else
			{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
}*/

//HALF PYRAMID USING NUMBER
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}*/

//FLOYDS TRIANGLE
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
}*/


//BUTTERFLY PATTERN
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		int space=2*n - 2*i;
		for(int j=1;j<=space;j++)
		{
			cout<<"  ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		int space=2*n-2*i;
		for(int j=1;j<=space;j++)
		{
			cout<<"  ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}*/

//INVERTED NUMBER PATTERN
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n+1-i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}*/

//0 & 1 PATTERN
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				cout<<"1 ";
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}*/

//RHOMBUS PATTERN
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<"  ";
		}
		for(int j=1;j<=n;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}*/

//NUMBER PATTERN
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}*/

//PALINDROMIC PATTERN
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{	int j;
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		int k=i;
		for(;j<=n;j++)
		{
			cout<<k--<<" ";
		}
		k=2;
		for(;j<=n+i-1;j++)
		{
			cout<<k++<<" ";
		}
		cout<<endl;
	}
}*/

//STAR PATTERN
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}*/

//ZIG ZAG PATTERN
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(((i+j)%4==0) || (i==2 && j%4==0))
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}
