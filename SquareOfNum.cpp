/*Q.2 Square Root of Integer
Given an Integar A. Compute and return the square root of A. If A is not a perfect square, return floor(sqrt(A)).
[Instruction: DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY]*/

#include<iostream>
using namespace std;
main()
{
	int numberToFindSquare,i;
	cout<<"Enter number to find square : ";
	cin>>numberToFindSquare;
	for(i = 1;i*i<numberToFindSquare;i++);
	if(i*i == numberToFindSquare)
	{
		cout<<i;
	}
		
	else
	{
		cout<<i-1;
	}
		
}
