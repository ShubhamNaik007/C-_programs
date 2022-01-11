//Accept number from user and display factorial output using while loop
// Input : 5
// Output :120

#include<iostream>
using namespace std;

typedef unsigned int UINT;

class Display
{
	public :
		UINT Factor(int iNo);
};

UINT Display :: Factor(int iNo)
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then 0"<<endl;
	}
	else if( iNo < 0)
	{
		iNo = -iNo;
	}
	
	UINT iCnt = 1 , iFact = 1;
	while(iCnt <= iNo)
	{
		iFact = iFact * iCnt;
		iCnt++;
	}
	return iFact;
}

int main()
{	
	int iValue = 0 ;
	UINT iRet = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	Display dobj ;
	
	iRet = dobj.Factor(iValue);
	
	cout<<"Factorial is "<<iRet;
	return 0;
}
