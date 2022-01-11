//write a program to accept string  from user and display it using function

#include<iostream>
using namespace std;

void Display(char str[])
{
	cout<<"You entered name is "<<str<<endl;
}

int main()
{
	char Arr[20];
	
	cout<<"Enter name : - "<<endl;
	cin>>Arr;
	
	Display(Arr);
	
	return 0;
}