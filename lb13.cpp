//Accept number from user and disply factor of number by reducing time complexity o(n/2)
// Input - 12
// Output - 1 , 2 , 4 , 6
#include<iostream>
using namespace std;

class Display
{
	public :
	void DisplayFactorial(int iNo)
	{
		if(iNo == 0)
		{
			cout<<"Enter number greater then zero"<<endl;
		}
		else if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		int i = 0;
		for(i = 1 ; i < (iNo/2) ; i++)
		{
			if( ((iNo % i == 0) && (i % 2 == 0)) || (i == 1) )
			{
				cout<<i<<" ";
			}
		}
	}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	Display dobj;
	dobj.DisplayFactorial(iValue);
	
	return 0;
}