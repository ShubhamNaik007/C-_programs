//write a program to accept string  from user and display character one by one using function 

#include<iostream>
using namespace std;

void Display(char *str)
{
	cout<<*str<<endl;
	str++;
	cout<<*str<<endl;
	str++;
	cout<<*str<<endl;
	str++;
	cout<<*str<<endl;
	str++;
	cout<<*str<<endl;
	str++;
	cout<<*str<<endl;
	str++;
	cout<<*str<<endl;
	str++;
}

int main()
{
	char Arr[20];
	
	cout<<"Enter name : - "<<endl;
	cin>>Arr;
	
	Display(Arr);
	
	return 0;
}