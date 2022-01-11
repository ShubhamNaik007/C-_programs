// Write a recursive program which display below pattern
// input : 5
// output : * * * * *

#include<iostream>
using namespace std;

void pattern(int no)
{
	while(no > 0)
	{
		cout<<"*	";
		no--;
	}
}

void patternR(int no)
{
	if(no > 0)
	{
		cout<<"*	";
		no--;
		patternR(no);
	}
}

int main()
{
	int iNo = 0;
	cout<<"Enter number :- \n";
	cin>>iNo;
	
	//pattern(iNo);
	patternR(iNo);
	
	return 0;
}