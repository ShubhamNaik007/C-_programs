// Write a recursive program which accept any number from user and display its table

#include<iostream>
using namespace std;

void DisplayX(int iNo)
{
	static int i = 1;
	int iResult = 0;
	if(i <= 10)
	{
		iResult = i * iNo;
		cout<<iNo<<" * "<<i<<" = "<<iResult<<endl;
		i++;
		DisplayX(iNo);
	}
}

int main()
{
	int iValue = 0;
	cout<<"Enter the number :- "<<endl;
	cin>>iValue;
	DisplayX(iValue);
	return 0;
}

