//Accept number from user and display pattern of # number of times
#include<iostream>
using namespace std;

class Display
{
	public :
		void DisplayPattern(int iNo)
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
			for(i = 1 ; i <= iNo ; i++)
			{
				cout<<"# ";
			}
			cout<<"\n";
		}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	Display dobj;	//object creation
	dobj.DisplayPattern(iValue);
	
	return 0;
}