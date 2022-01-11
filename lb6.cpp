// Accept number from user and display below pattern
// input - 4  output - 4 3 2 1

#include<iostream>
using namespace std;

class Display
{
	public :
		void DisplayPattern(int iNo);
};

void Display ::  DisplayPattern(int iNo)
{
	if(iNo == 0)
	{
		cout<<"Enter number greater then 0"<<endl;
	}
	else if( iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0;
	for(i = iNo ; i > 0 ; i--)
	{
		cout<<i<<"\t";
	}
	cout<<"";
}

int main()
{	
	int iValue = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	Display dobj; 
	dobj.DisplayPattern(iValue);
	
	return 0;
}