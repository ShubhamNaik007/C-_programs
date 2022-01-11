//Accept number and display the table
#include<iostream>
using namespace std;

void ShowTable(int iNo)
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then zero"<<endl;
		return;
	}
	else if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0 , iRet = 0;
	for( i = 1 ; i <= 10 ; i++)
	{
		iRet = i * iNo;
		cout<<iNo<<" * "<<i<<" = "<<iRet<<endl;
	}
}

int main()
{
	int iValue = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	ShowTable(iValue);
	
	return 0;
}

