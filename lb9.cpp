//Accept number from user and display sum of its number using unsigned int
// Input : 5
// Output :15 (1 + 2 + 3 + 4 + 5)
 
#include<iostream>
using namespace std;

typedef unsigned int UINT;

class Display
{
	public :
		UINT Sum(int iNo);
};

UINT Display :: Sum(int iNo)
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then 0"<<endl;
	}
	else if( iNo < 0)
	{
		iNo = -iNo;
	}
	
	UINT i = 0 , iSum = 0;
	for(i = 1 ; i <= iNo ; i++)
	{
		iSum = iSum + i;
	}
	return iSum;
}

int main()
{	
	int iValue = 0 ;
	UINT iRet = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	Display dobj ;
	
	iRet = dobj.Sum(iValue);
	
	cout<<"Sum is "<<iRet;
	return 0;
}
