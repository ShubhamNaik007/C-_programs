//Accept string from user and impliments your own strlen function
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT strlenX(char *str)
{
	int iCnt = 0;
	if((str == NULL) || (*str == ' '))
	{
		return iCnt;
	}
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[50] = " ";
	UINT iRet = 0;
	cout<<"Enter the string :- "<<endl;
	scanf("%[^'\n']s",Arr);
	
	iRet = strlenX(Arr);
	
	cout<<"Length of string is "<<iRet<<endl;
	return 0;
}