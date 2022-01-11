//Accept number and print its decimal , octal , hexadecimal format

#include<iostream>
using namespace std;

void OctalNumber(int iNum)
{
	int iDigit = 0 , i = 0 , j = 0;
	int Arr[8];
	while(iNum != 0)
	{
		iDigit = iNum % 8;
		Arr[i] = iDigit;
		iNum = iNum / 8;
		i++;
	}
	
	cout<<"Octal number is ";
	for(j = i-1 ; j >= 0 ; j--)
	{
		cout<<Arr[j];
	}
	cout<<endl;
}

void HexaDecimalNumber(int iNum)
{
	int iDigit = 0 , i = 0 , j = 0;
	int Arr[8];
	while(iNum != 0)
	{
		iDigit = iNum % 16;
		Arr[i] = iDigit;
		iNum = iNum / 16;
		i++;
	}
	cout<<"Hexadecimal number is ";
	for(j = i-1 ; j >= 0 ; j--)
	{
		cout<<Arr[j];
	}
	cout<<endl;
}

int main()
{
	int iNo = 0;
	
	printf("Enter number  :- \t");
	scanf("%d",&iNo);
	
	printf("\n");
	printf("Decimal number format is %d \n",iNo);
	OctalNumber(iNo);
	HexaDecimalNumber(iNo);

	return 0;
}