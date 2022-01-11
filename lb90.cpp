//Accept string from user and reverse that content of string in place 
#include<iostream>
using namespace std;

void swap(char *p , char *q)
{
	char temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	char ch1 , ch2 ;
	cout<<"Enter first character :- "<<endl;
	cin>>ch1;
	
	cout<<"Enter second character :- "<<endl;
	cin>>ch2;
	
	cout<<"Before swapping value is "<<ch1<<" and "<<ch2<<endl;
	
	swap(&ch1,&ch2);
	
	cout<<"After swapping value is "<<ch1<<" and "<<ch2<<endl;
	
	return 0;
}