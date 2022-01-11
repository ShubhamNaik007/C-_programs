//Accpet one number from user and show it pallindrome or not
// input - 12321 , output - 12321 , Number is pallindrome
// input - 12367 , output - 16721 , Number is not pallindrome
#include<iostream>
using namespace std;

bool DisplayReverse(int);

int main()
{
	int iValue = 0 ;
	bool bRet = false;
	
	printf("Enter number \n");
	scanf("%d",&iValue);
	
	bRet = DisplayReverse(iValue);
	if(bRet == true)
	{
		printf("Number is pallindrome ");
	}
	else
	{
		printf("Number is not pallindrome ");
	}
	
	return 0;
}

bool DisplayReverse(int iNo)
{
	int iRev = 0 , iDigit = 0;

	if(iNo == 0)
	{
		cout<<"Enter number greater then zero"<<endl;
		return false;
	}
	else if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iNum = iNo;
	
	while(iNo != 0)					
	{		
		iDigit = iNo % 10;				
		iRev = (iRev * 10) + iDigit;	 
		iNo = iNo / 10;					
	}
	
	if(iRev == iNum)
	{
		return true;
	}
	else
	{
		return false;
	}
}