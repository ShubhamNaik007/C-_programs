//Display 1 to 5 on screen 

#include<iostream>
using namespace std;

void Display()
{
	int i = 0;
	for(i = 1 ; i <= 5 ; i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}

int main()
{
	Display();
	return 0;
}