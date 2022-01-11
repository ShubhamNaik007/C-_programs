//Accept number from user and check wheather that number is perfect number or not
// input = 6	, output = 1 + 2 + 3 = 6
#include<iostream>
using namespace std;

bool CheckPerfectNo(int);


int main()
{
	int iValue = 0 ;
	bool bRet = false;
	
	printf("Enter number \n");
	scanf("%d",&iValue);
	
	bRet = CheckPerfectNo(iValue);
	
	if(bRet == true)
	{
		cout<<iValue<<" is perfect number"<<endl;
	}
	else
	{
		cout<<iValue<<" is not perfect number"<<endl;

	}
	
	return 0;
}

bool CheckPerfectNo(int iNo)
{
	
	if(iNo == 0)
	{
		cout<<"Enter number greater then zero"<<endl;
		return false;
	}
	else if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0 , iSum = 0;
	for(i = 1 ; i < iNo ; i++)
	{
		if(iNo % i == 0)
		{
			iSum = iSum + i;
		}
	}
		
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}