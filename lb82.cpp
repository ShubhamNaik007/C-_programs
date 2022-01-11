//accept string from user and return small letters count in it
#include<iostream>
using namespace std;

char CountSmall(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if( (*str >= 'a') && (*str <= 'z') )
		{
			iCnt++;
		}
		str++;
	}
	
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter the String :- \n";
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSmall(Arr);
	
	cout<<"Count small letters  "<<iRet<<endl;
	
	return 0;
}