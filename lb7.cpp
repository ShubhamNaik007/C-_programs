//Accept number from user and display factorial
// Input : 5
// Output :120

#include<iostream>
using namespace std;

class Display
{
	public :
		int Factorial(int iNo);
};

int Display :: Factorial(int iNo)
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then 0"<<endl;
	}
	else if( iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iFact = 1 , i = 0;
	for( i = 1 ; i <= iNo ; i++)
	{
		iFact = iFact * i;
	}
	
	return iFact;
}

int main()
{
	int iValue = 0 , iRet = 0;
	
	cout<<"Enter number "<<endl;
	cin>>iValue;
	
	Display dobj;
	iRet = dobj.Factorial(iValue);
	
	cout<<"Factorial of number "<<iValue<<" is "<<iRet;
	return 0;
}