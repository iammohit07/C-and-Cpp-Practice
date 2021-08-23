/*Q.1 Maximum height of the staircase
Given an integer A representing the square blocks. The height of each square block is 1. The task is to create
a staircase of max height using these blocks. The first stair would require only one block, the second stair
would require two blocks and so on. Find and return the maximum height of the staircase.*/

#include<iostream>
using namespace std;
main()
{
	int inputVal,maxHeightOfStairs=0,sum=0;
	cin>>inputVal;
	for(int i = 1;i<=inputVal;i++)
	{
		sum = sum + i;
		if(sum<=inputVal)
		{
			maxHeightOfStairs++;
		}
	}
	cout<<"Max Height of Stairs is : "<<maxHeightOfStairs;
}



