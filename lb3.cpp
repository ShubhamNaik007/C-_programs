//Display '#' on screen  using hardcoded value
#include<iostream>
using namespace std;

void DisplayPattern()
{
	int i = 0;
	for(i = 1 ; i <= 5 ; i++)
	{
		cout<<"# \t";
	}
	cout<<" "<<endl;
}

int main()
{
	DisplayPattern();
	return 0;
}
