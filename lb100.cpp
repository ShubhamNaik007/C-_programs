//Accept number from user and check 3rd OR 6th bit is on or off
#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CheckBit(int iNo)
{
	UINT iMask = 0x00000024 , iDigit = 0;
	iDigit = iNo & iMask;
	
	if(iDigit == iMask)
	{
		return 1;
	} 
	else if(iDigit == 0x00000020)
	{
		return 2;
	}
	else if(iDigit == 0x00000004)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	cout<<"Enter number :- "<<endl;
	cin>>iValue;
	
	iRet = CheckBit(iValue);
	
	if(iRet == 1)
	{
		cout<<"Both 3rd and 6th bit are ON of that number "<<iValue<<endl;
	}
	else if(iRet == 2)
	{
		cout<<"6th bit is ON but 3rd bit is OFF of that number "<<iValue<<endl;
	}
	else if(iRet == 3)
	{
		cout<<"3rd bit is ON but 6th bit is OFF of that number "<<iValue<<endl;
	}
	else if(iRet == 4)
	{
		cout<<"3rd and 6th bits are OFF of that number "<<iValue;
	}
	return 0;

}