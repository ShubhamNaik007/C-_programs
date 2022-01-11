/*
Accpet number from user and display below pattern
input - row -3 cols -4
output - 
		* # * #
		* # * #
		* # * #
*/
#include<iostream>
using namespace std;

void Display(int iRows , int iCols)
{
	if(iRows == 0)
	{
		cout<<"Enter number greater then zero"<<endl;
		return;
	}
	if(iCols == 0)
	{
		cout<<"Enter number greater then zero"<<endl;
		return;
	}
	
	if(iRows < 0)
	{
		iRows = -iRows;
	}
	
	if(iCols < 0)
	{
		iCols = -iCols;
	}
	
	
	int i = 0 , j = 0;
	for(i = 1 ; i <= iRows ; i++)
	{
		for(j = 1 ; j <= iCols ; j++)
		{
			if(j % 2 == 0)
			{
				cout<<"# ";
			}
			else
			{
				cout<<"* ";
			}
		}
		cout<<"\n";
	}
}

int main()
{	
	int iValue1 = 0 ,  iValue2 = 0;
	
	cout<<"Enter rows number"<<endl;
	cin>>iValue1;
	
	cout<<"Enter colums number"<<endl;
	cin>>iValue2;
	
	Display(iValue1,iValue2);
	
	return 0;
}