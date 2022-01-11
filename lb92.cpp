//Accept number from user and write its binary number
#include<iostream>
using namespace std;

void ConvertBinary(int iNo)
{
	int iDigit = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 2;
		cout<<iDigit<<" ";
		iNo = iNo / 2;
	}
	cout<<endl;
}

int main()
{
	int iValue = 0;
	cout<<"Enter number :- "<<endl;
	cin>>iValue;
	
	ConvertBinary(iValue);
	return 0;
}