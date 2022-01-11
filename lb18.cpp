//Accpet one number from user and reverse that number
// input - 123
//output - 321
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT DisplayReverse(int);

int main()
{
	UINT iValue = 0 , iRet = 0;
	
	printf("Enter number \n");
	scanf("%d",&iValue);
	
	iRet = DisplayReverse(iValue);
	printf("Reverse number is %d ",iRet);
	
	return 0;
}

UINT DisplayReverse(int iNo)
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then zero"<<endl;
	}
	else if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	UINT iRev = 0 , iDigit = 0;
	while(iNo != 0)					// 456
	{		
		iDigit = iNo % 10;				// iDigit = 456 % 10 = 6 , 45 % 10 = 5 		, 4 % 10 = 4
		iRev = (iRev * 10) + iDigit;	// iRev = (0 * 10) + 6 = 6 , (6 * 10) + 5 = 65 , (65 * 10) + 4 = 654 
		iNo = iNo / 10;					// iNo = 456 / 10 = 45	, 45 / 10  = 4	, 0 / 10 = 0
	}
	return iRev;
}