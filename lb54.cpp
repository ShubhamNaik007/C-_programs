// Write a recursive program which accept number from user and return factorial
// input : 	5
// output : 120

#include<iostream>
using namespace std;

int Factors(int iNo)
{
	int iFactor = 1;
	while(iNo != 0)
	{
		iFactor = iFactor * iNo;
		iNo = iNo - 1;
	}
	
	return iFactor;
}

int FactorsX(int iNo)
{
	static int iFactor = 1;
	if(iNo != 0)
	{
		iFactor = iFactor * iNo;
		iNo = iNo - 1;
	}
	if(iNo == 0)
	{
		return iFactor;
	}
	else
	{
		FactorsX(iNo);
	}
}

int main()
{
	int iNo = 0 , iRet = 0;
	cout<<"Enter number :- \n";
	cin>>iNo;
	
	//pattern(iNo);
	iRet = FactorsX(iNo);
	
	cout<<"Factor is  "<<iRet;
	return 0;
}

