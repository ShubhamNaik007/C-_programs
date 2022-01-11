// Accept string from user and calculate vowels in it
#include<iostream>
using namespace std;

int CheckVowels(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if( (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') ) 
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char cValue[30];
	int iRet = 0;
	cout<<"Enter string :- "<<endl;
	scanf("%[^'\n']s",cValue);
	
	iRet = CheckVowels(cValue);
	
	cout<<"Number of vowels are "<<iRet;
	
	return 0;
}