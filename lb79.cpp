//convert string small to capital 
#include<iostream>
using namespace std;

char SmallToCapital(char cValue)
{
	if( (cValue >= 'a') && (cValue <= 'z') )
	{
		cValue = cValue - 32;
	}
	
	return cValue;
}

int main()
{
	char iValue = 0 , cRet = '\0';
	
	cout<<"Enter the number :- "<<endl;
	cin>>iValue;
	
	cout<<"Before character is "<<iValue<<endl;
	
	cRet = SmallToCapital(iValue);
	
	cout<<"After character is "<<cRet<<endl;
	
	return 0;
}