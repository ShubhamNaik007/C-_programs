// display pattern using hardcoded value
// input - 4  output - 4 3 2 1

#include<iostream>
using namespace std;

class Display
{
	public :
		void DisplayPattern();
};

void Display ::  DisplayPattern()
{
	int i = 0;
	for(i = 4 ; i > 0 ; i--)
	{
		cout<<i<<"\t";
	}
	cout<<"";
}

int main()
{	
	Display dobj; 
	dobj.DisplayPattern();
	
	return 0;
}