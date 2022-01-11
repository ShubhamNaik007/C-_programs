// Write a recursive program which accept number from user and display numebers sum
// input : 879
// output : 24

#include<iostream>
using namespace std;


int FactorSum(int iNo)
{
	int FSum = 0;
	int iDigit = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		FSum = FSum + iDigit;
		iNo = iNo / 10;
	}
	
	return FSum;
}

int FactorSumX(int iNo)
{
	static int FSum = 0;
	int iDigit = 0;
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		FSum = FSum + iDigit;
		iNo = iNo / 10;
	}
	
	if(iNo == 0)
	{
		return FSum;
	}
	else
	{
		FactorSumX(iNo);
	}
}

int main()
{
	int iNo = 0 , iRet = 0;
	cout<<"Enter number :- \n";
	cin>>iNo;
	
	//pattern(iNo);
	iRet = FactorSumX(iNo);
	
	cout<<"Sum is "<<iRet;
	return 0;
}

