//Accept number from user and show its even or not
// Input : 2
// Output : 2 is even

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

bool CheckEven(int iNo)
{
	
	if(iNo % 2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue = 0 ;
	bool bRet = FALSE;
	
	cout<<"Enter number "<<endl;
	cin>>iValue;
	
	bRet = CheckEven(iValue);
	
	if(bRet == TRUE)
	{
		cout<<"Number is even number"<<endl;
	}
	else
	{
		cout<<"Number is not even number"<<endl;
	}
	return 0;
}
