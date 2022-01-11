//Accept 2 number display its power
#include<iostream>
using namespace std;

int DisplayPower(int iNo1 , int iNo2)
{
	
	if(iNo1 == 0)
	{
		cout<<"Number should be greater then zero "<<endl;
		return 0;
	}
	
	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	
	if(iNo2 < 0)
	{
		iNo2 = -iNo2;
	}
	
	
	int i = 0 , iNumber = 1;
	for(i = 1 ; i <= iNo2 ; i++)
	{
		iNumber = iNumber * iNo1;
	}
	
	return iNumber;
}

int main()
{
	int iValue1 = 0 , iValue2 = 0, iRet = 0;
	
	printf("Enter base number \n");
	scanf("%d",&iValue1);
	
	printf("Enter power number \n");
	scanf("%d",&iValue2);
	
	iRet = DisplayPower(iValue1 , iValue2);
	
	printf("Power  is %d",iRet);
	
	return 0;
}
