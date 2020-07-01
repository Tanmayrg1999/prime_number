#include<iostream>
using namespace std;
int isprime(int num)
{
	int flag=1;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
}
int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	if(isprime(num))
	{
		cout<<"PRIME NUMBER";
	}
	else
	{
	cout<<"not a prime number";
	}
}
