//Accept number from user and check first 4 bits is on or off
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(int iNo)
{
	UINT iMask = 0X0000000f  , iDigit = 0;
	
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
		cout<<"first four Bits is on of number "<<iValue;
	}
	else
	{
		cout<<"first four Bits is off of number "<<iValue;
	}
	return 0;
}