//Accept number from user and check 12th  and 7th bits is on or off
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(int iNo)
{
	UINT iMask = 0X00000840  , iDigit = 0;
	
	iDigit = iMask & iNo;
	
	if(iMask == iDigit)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	cout<<"Enter number :- "<<endl;
	cin>>iValue;
	
	bRet = CheckBit(iValue);
	
	if(bRet == true)
	{
		cout<<"12th and 7th Bit is on of number "<<iValue;
	}
	else
	{
		cout<<"12th and 7th Bit is off of number "<<iValue;
	}
	return 0;
}