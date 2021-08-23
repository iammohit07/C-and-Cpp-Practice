// Program to check if a 3 digit number is palindrome or not
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter 3 digit number to check : ";
	cin>>n;
	
	
	// Find total number of digits - 1
	int digits = (int)log10(n);

	// Finding  the first digit
	
	int firstDigit = (int)(n / pow(10, digits));
	
	// Finding  the last digit
	
	int lastDigit = n%10;
	
	//check if first and last digit is same in given 3 digit number than its a pallindrome
	
	if(firstDigit == lastDigit)
	{
		cout<<"Given number is pallindrome !! ";
	}
	else
	{
		cout<<"Sorry ,Given number is not  pallindrome !! ";

	}
	
	return 0;
}

