//Take three numbers input from keyboard and print their values in descending order. (Like variable a, b
//and c has values 7, 10 and 5 then values will be printed in order 10, 7, 5)

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers : "<<endl;
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	{
		cout<<a<<",";
		if(b>c)
		{
			cout<<b<<","<<c;
		}
		else if(c>b)
		{
			cout<<c<<","<<b;
		}
	}
	else if(b>a && b>c)
	{
		cout<<b<<",";
		if(a>c)
		{
			cout<<a<<","<<c;
		}
		else if(c>a)
		{
			cout<<c<<","<<a;
		}
	}
	else if(c>a && c>b)
	{
		cout<<c<<",";
		if(a>b)
		{
			cout<<a<<","<<b;
		}
		else if(b>a)
		{
			cout<<b<<","<<a;
		}
	}
	
}
