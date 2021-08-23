/*Q.1 Maximum height of the staircase
Given an integer A representing the square blocks. The height of each square block is 1. The task is to create
a staircase of max height using these blocks. The first stair would require only one block, the second stair
would require two blocks and so on. Find and return the maximum height of the staircase.

#include <iostream>
#include <math.h>
using namespace std;

//check if a number is perfect cube number or not
bool isCubePerfect(int n)
{
	int d = cbrt(n);

	// checks if it is a perfect cube number
	if (d * d * d == n)
		return true;

	return false;
}

// find the largest non perfect cube number in the array
int largestNonPerfectcubeNumber(int a[], int n)
{
	// stores the maximum of all perfect cube numbers
	int maxi = -1;

	// Traverse all elements in the array
	for (int i = 0; i < n; i++) {

		// store the maximum if current element is a non perfect cube
		if (!isCubePerfect(a[i]))
			maxi = max(a[i], maxi);
	}

	return maxi;
}

int main()
{
	int a[] = { 16, 64, 25, 2, 3, 10 };

	int n = sizeof(a) / sizeof(a[0]);

	cout << largestNonPerfectcubeNumber(a, n);

	return 0;
}
*/

/*Question-2
Write a program to find Number of pairs in an array with the sum greater than 0.*/

#include <bits/stdc++.h>
using namespace std;

// find the number of pairs in the array with sum > 0
int findNumOfPair(int* a, int n)
{

	// Sorting the given array
	sort(a, a + n);

	// Variable to store the count of pairs
	int ans = 0;

	// Loop to iterate through the array
	for (int i = 0; i < n; ++i) {

		// Ignore if the value is negative
		if (a[i] <= 0)
			continue;

		// Finding the index using lower_bound
		int j = lower_bound(a, a + n, -a[i] + 1) - a;

		// Finding the number of pairs between two indices i and j
		ans += i - j;
	}
	return ans;
}

int main()
{
	int a[] = { 3, -2, 1 };
	int n = sizeof(a) / sizeof(a[0]);

	int ans = findNumOfPair(a, n);
	cout << ans << endl;

	return 0;
}










