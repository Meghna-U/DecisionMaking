#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter your age:";
	cin>>a;
	if(a<18)
	{
		cout<<"Sorry! You are not eligible to vote. You must wait for another "<<18-a<<" years.";
	}
	else if(a==18)
	{
		cout<<"Congrats! You can now vote.";
	}
	else
	{
		cout<<"You are eligible to vote.";
	}
	return 0;
}
