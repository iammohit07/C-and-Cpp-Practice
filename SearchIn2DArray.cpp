/*Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it. Otherwise, print �Not Found�. In the given matrix, every row and column is sorted in increasing order.
The designed algorithm should have linear time complexity.*/

#include <iostream>
using namespace std;

int search(int mat[4][4], int n, int x)
{
	if (n == 0)
		return -1;

	int smallest = mat[0][0], largest = mat[n - 1][n - 1];
	if (x < smallest || x > largest)
		return -1;

	// set indexes for top right element
	int i = 0, j = n - 1;
	while (i < n && j >= 0)
	{
		if (mat[i][j] == x)
		{
			cout << "n Found at "
				<< i << ", " << j;
			return 1;
		}
		if (mat[i][j] > x)
			j--;
	
		// Check if mat[i][j] < x
		else
			i++;
	}

	cout << "n Element not found";
	return 0;
}

int main()
{
	int mat[4][4] = { { 10, 20, 30, 40 },
					{ 15, 25, 35, 45 },
					{ 27, 29, 37, 48 },
					{ 32, 33, 39, 50 } };
	search(mat, 4, 29);

	return 0;
}
