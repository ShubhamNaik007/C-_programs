/*
Accpet number from user and display below pattern
input - row -3 cols -3
output - 
		3 2 1
		3 2 1
		3 2 1 
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
	for(i = iRows ; i > 0 ; i--)
	{
		for(j = iCols ; j > 0 ; j--)
		{
			cout<<j<<" ";
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