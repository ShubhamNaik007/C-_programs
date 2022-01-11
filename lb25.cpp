/* Display below pattern
 input : 5
 output : * * * * *
*/
#include<iostream>
using namespace std;

void Display(int iNo)
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then zero"<<endl;
		return;
	}
	else if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0;
	for(i = 1 ; i <= iNo ; i++)
	{
		cout<<"* \t";
	}
}

int main()
{	
	int iValue = 0;
	
	cout<<"Enter Number"<<endl;
	cin>>iValue;
	
	Display(iValue);
	
	return 0;
}