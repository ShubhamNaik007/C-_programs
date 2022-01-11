//Accept number from user and display range between them

#include<iostream>
using namespace std;

void Display(int iNo)
{
	if(iNo <= 0)
	{
		cout<<"Enter number greater then 0"<<endl;
	}
	
	int i = 0;
	for(i = 1 ; i <= iNo ; i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}

int main()
{
	int iValue = 0;
	
	cout<<"Enter number \n";
	cin>>iValue;
	
	Display(iValue);
	
	return 0;
}