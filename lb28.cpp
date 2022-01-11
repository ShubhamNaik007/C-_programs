/*Accept number from user and display below pattern
input - 6
		1  2 3 4 5 6
output - * # * # * #
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
		if(i % 2 == 0)
		{
			cout<<"# ";
		}
		else
		{
			cout<<"* ";
		}
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