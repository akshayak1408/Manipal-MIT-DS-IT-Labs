#include<iostream>
using namespace std;
int main()
{
	int mat[3][3],r,c,diagonal_sum,row_sum,col_sum,n=3,flag=0;
	cout<<"Enter matrix of order 3x3: \n";
	for (r=0;r<n;r++)
	{
		for (c=0;c<n;c++)
			cin>>mat[r][c];
	}
	cout<<"Entered matrix is:\n";
	for (r=0;r<n;r++)
	{
		for (c=0;c<n;c++)
		{
			cout<<mat[r][c]<<"\t";
		}
		cout<<"\n";
	}
	diagonal_sum = 0;
	for (r=0;r<n;r++)
	{
		for (c=0;c<n;c++)
		{
			if (r==c)
			diagonal_sum=diagonal_sum+mat[r][c];
		}
	}
	for (r=0;r<n;r++)
	{
		row_sum=0;
		for (c=0;c<n;c++)
		{
			row_sum=row_sum+mat[r][c];
		}
		if (diagonal_sum==row_sum)
			flag=1;
		else
		{
			flag=0;
			break;
		}
	}
	for (r=0;r<n;r++)
	{
		col_sum=0;
		for (c=0;c<n;c++)
		{
			col_sum=col_sum+mat[c][r];
		}
		if (diagonal_sum==col_sum)
			flag=1;
		else
		{
			flag=0;
			break;
		}
	}
	if (flag==1)
		cout<<"Given matrix is a magic square.\n";
	else
		cout<<"Given matrix is not a magic square.\n";
		return 0;
}
