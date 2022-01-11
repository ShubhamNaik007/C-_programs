//convert string capital to small
#include<iostream>
using namespace std;

char CapitalToSmall(char cValue)
{
	if( (cValue >= 'A') && (cValue <= 'Z') )
	{
		cValue = cValue + 32;
	}
	
	return cValue;
}

int main()
{
	char iValue = 0 , cRet = '\0';
	
	cout<<"Enter the letter:- "<<endl;
	cin>>iValue;
	
	cout<<"Before character is "<<iValue<<endl;
	
	cRet = CapitalToSmall(iValue);
	
	cout<<"After character is "<<cRet<<endl;
	
	return 0;
}