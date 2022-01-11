//Accept number from user and display count of number of even numbers
// input = 1234
// output = 2
#include<iostream>
using namespace std;

class Display
{
	public :
	
	int DisplayRev(int iNo);;
};

int Display :: DisplayRev(int iNo)
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then zero"<<endl;
	}
	else if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iDigit = 0, iCounter = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			iCounter++;
		}
		iNo = iNo / 10;
	}
	return iCounter;
}

int main()
{
	int iValue = 0 , iRet = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	Display dobj;
	iRet = dobj.DisplayRev(iValue);
	
	cout<<"Number of even digits are "<<iRet;
	return 0;
}