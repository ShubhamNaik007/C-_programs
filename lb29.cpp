/*Accpet number from user and display below pattern
input - 6
iCnt - 		1 2 3 4 5 6
output - 	a b c d e f
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
	
	int i = 0 ;
	char ch = 'a';
	for(i = 1 ; i <= iNo ; i++)
	{
		cout<<ch<<" ";
		ch++;
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