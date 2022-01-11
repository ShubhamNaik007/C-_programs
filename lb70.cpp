//write a program to accept string  from user and display character one by one using function 

#include<iostream>
using namespace std;

void Display(char *str)
{
	while( *str != '\0' )
	{
		cout<<*str<<" ";
		str++;
	}
}

int main()
{
	char Arr[20];
	
	cout<<"Enter name :- \n";
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	return 0;
}