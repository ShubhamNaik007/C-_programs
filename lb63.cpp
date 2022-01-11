//Accept numbers from user and accept one number from user and check  wheather number is present or not
#include<iostream>
using namespace std;

int CheckNumber(int *Brr , int iSize , int iNo)
{
	int i = 0 , iNum = -1;
	for(i = 0 ; i < iSize ; i++)
	{
		if(Brr[i] == iNo)
		{
			iNum = i;
		}
	}
	return iNum;
}

int main()
{
	int iValue = 0 , iRet = 0 , iSearch = 0 , i = 0;
	
	cout<<"Enter how many elements \n";
	cin>>iValue;
	
	int Arr[iValue];
		
	cout<<"Enter data \n";
	for(i = 0 ; i < iValue ; i++)
	{
		cin>>Arr[i];
	}
	
	cout<<"Enter number for search \n";
	cin>>iSearch;
	
	iRet = CheckNumber(Arr,iValue,iSearch);
	
	if(iRet == -1)
	{
		cout<<"Number is not found \n";
	}
	else
	{
		cout<<"Number foudnd at position is "<<iRet<<endl;
	}
	return 0;
}