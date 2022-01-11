//Accpet one number from user and show it pallindron or not using two function
// input - 12321 , output - 12321 , Number is pallindrome
// input - 12367 , output - 16721 , Number is not pallindrome
#include<iostream>
using namespace std;

bool CheckPallinrome(int);
int Reverse(int);

int main()
{
	int iValue = 0 ;
	bool bRet = false;
	
	printf("Enter number \n");
	scanf("%d",&iValue);
	
	bRet = CheckPallinrome(iValue);
	
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

bool CheckPallinrome(int iNo)
{
	int iRet = 0;

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
	
	iRet = Reverse(iNo);
	
	if(iRet == iNum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Reverse(int iNo)
{
	int iDigit = 0 , iRev = 0;
	while(iNo != 0)					
	{		
		iDigit = iNo % 10;				
		iRev = (iRev * 10) + iDigit;	 
		iNo = iNo / 10;					
	}
	return iRev;
}