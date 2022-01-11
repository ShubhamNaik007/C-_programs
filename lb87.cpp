// Accept string and character from user and calculate the count of frequency

#include<iostream>
using namespace std;

int CheckFrequency(char *str,char ch)
{
	if(str == NULL)
	{
		return -1;
	}
	
	int iCnt = 0;
	char cTemp = '\0';
	
	if((ch >= 'A') && (ch <= 'Z'))
	{
		cTemp = ch + 32;
	}
	else
	{
		cTemp = ch - 32;
	}
	
	while(*str != '\0')
	{
		if( (*str == ch) || (*str == cTemp))
		{
			iCnt++;
		}
		str++;
	}
	
	return iCnt;
}

int main()
{
	char arr[40];
	char cValue = '\0';
	int iRet = 0;
	
	cout<<"Enter string :- "<<endl;
	scanf("%[^'\n']s",arr);
	
	cout<<"Enter character to search :- "<<endl;
	cin>>cValue;
	
	iRet = CheckFrequency(arr,cValue);	
	
	if(iRet == -1)
	{
		cout<<"Enter some string ...."<<endl;
	}
	else
	{
		cout<<"Character  frequency in string "<<arr<<" is "<<iRet<<endl;
	}
	
	return 0;
}