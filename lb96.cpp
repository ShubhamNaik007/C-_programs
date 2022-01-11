//Accept number from user and check 4th and 6th bit is on or off
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(int iNo)
{
	UINT iMask = 0x00000028 , iDigit = 0;
	
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
		cout<<"4th and 6th Bit is on of number "<<iValue;
	}
	else
	{
		cout<<"4th and 6th Bit is off of number "<<iValue;
	}
	return 0;
}