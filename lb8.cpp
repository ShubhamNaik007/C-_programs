//Accept number from user and display sum of its number
// Input : 5
// Output :15 (1 + 2 + 3 + 4 + 5)
 
#include<iostream>
using namespace std;

class Display
{
	public :
		int Factor(int iNo);
};

int Display :: Factor(int iNo)
{
	int i = 0 , iSum = 0;
	for(i = 1 ; i <= iNo ; i++)
	{
		iSum = iSum + i;
	}
	return iSum;
}

int main()
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then 0"<<endl;
	}
	else if( iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iValue = 0 , iRet = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	Display dobj ;
	
	iRet = dobj.Factor(iValue);
	
	cout<<"Sum is "<<iRet;
	return 0;
}
