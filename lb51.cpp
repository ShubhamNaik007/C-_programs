//Write a recursive program which display below pattern
//input : 5
//output : 1 2 3 4 5 

#include<iostream>
using namespace std;

void pattern(int no)
{
	int i = 1;
	while(no > 0)
	{
		cout<<i<<"	";
		i++;
		no--;
	}
}

void patternR(int no)
{
	static int i = 1;
	if(no > 0)
	{
		cout<<i<<"	";
		no--;
		i++;
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