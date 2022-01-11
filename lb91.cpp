//Reverse string

#include<iostream>
using namespace std;

void strrevX(char *start)
{
	char *end = start;
	char temp;
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
	}
	
	cout<<"After reverse string is "<<start<<endl;
	
}

int main()
{
	char arr[30];
	
	cout<<"Enter String :- "<<endl;
	scanf("%[^'\n']s",arr);
	
	cout<<"Brefore reverse string is "<<arr<<endl;
	strrevX(arr);
	return 0;
}