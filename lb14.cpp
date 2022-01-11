//Accept number from user and display each digit from number in reverse formate and return its sum and count of digit
// input = 1234
/* output   4       3       2       1
			Number of digits are 4
			Sum of all digits are 10
*/
#include<iostream>
using namespace std;

class Display
{
	public :
	
	void DisplayRev(int iNo);;
};

void Display :: DisplayRev(int iNo)
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then zero"<<endl;
	}
	else if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iDigit = 0 , iSum = 0 , iCounter = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		cout<<iDigit<<" ";
		iSum = iSum + iDigit;
		iCounter++;
		iNo = iNo / 10;
	}
	cout<<"\n";
	cout<<"Number of digits are "<<iCounter<<endl;
	cout<<"Sum of all digits are "<<iSum<<endl;
}

int main()
{
	int iValue = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	Display dobj;
	dobj.DisplayRev(iValue);
	
	return 0;
}