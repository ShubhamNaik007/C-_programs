//Accept number from user and display sum of even numbers
// input = 1234
// output = 6
#include<iostream>
using namespace std;

class Display
{
	public :
	
	int DisplaySum(int iNo);;
};

int Display :: DisplaySum(int iNo)
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then zero"<<endl;
	}
	else if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iDigit = 0 ,iSum = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			iSum = iSum + iDigit;
		}
		iNo = iNo / 10;
	}
	return iSum;
}

int main()
{
	int iValue = 0 , iRet = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	Display dobj;
	iRet = dobj.DisplaySum(iValue);
	
	cout<<"Sum of even digits are "<<iRet;
	return 0;
}