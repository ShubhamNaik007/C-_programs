//Accept number from user and write its binary number
#include<iostream>
using namespace std;

void ConvertBinary(int iNo)
{
	int iDigit = 0 , i = 0 , j = 0;
	int Arr[8] ;
	while(iNo > 0)
	{
		iDigit = iNo % 2;
		Arr[i] = iDigit;
		iNo = iNo / 2;
		i++;
	}
	for(j = i-1 ; j >= 0 ; j--)
	{
		cout<<Arr[j]<<" ";
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