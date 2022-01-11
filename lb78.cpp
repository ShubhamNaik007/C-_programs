//Accept number from user and check wheather it is number or not 
#include<iostream>
using namespace std;

bool CheckNumber(char iNo)
{
	int iCnt = 0;
	if( (iNo >= '0') && (iNo <= '9') )
	{
		iCnt++;
	}
	
	if(iCnt != 0)
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
	char iValue = 0;
	bool bRet = false;
	
	cout<<"Enter the number :- "<<endl;
	cin>>iValue;
	
	bRet = CheckNumber(iValue);
	if(bRet == true)
	{
		cout<<"It is digit";
	}
	else
	{
		cout<<"It is not digit";
	}
	return 0;
}