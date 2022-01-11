//convert  capatial to small or small to capital
#include<iostream>
using namespace std;

char CapitalToSmall(char cValue)
{
	if( (cValue >= 'A') && (cValue <= 'Z') )
	{
		cValue = cValue + 32;
	}
	else if( (cValue >= 'a') && (cValue <= 'z') )
	{
		cValue = cValue - 32;
	}
	else
	{
		return 1;
	}
	
	return cValue;
}

int main()
{
	char iValue = 0 , cRet = '\0';
	
	cout<<"Enter the letter :- "<<endl;
	cin>>iValue;
	
	cout<<"Before character is "<<iValue<<endl;
	
	cRet = CapitalToSmall(iValue);
	
	if(cRet == 1)
	{
		cout<<"Enter only letter"<<endl;
	}
	else
	{
		cout<<"After character is "<<cRet<<endl;
	}
	
	return 0;
}