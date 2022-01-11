//Accept string from user and check it pallindrom or not
//time complexity - n+n/2
#include<iostream>
using namespace std;

bool CheckPallindrom(char *str)
{
	char *start = str;
	char *end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		if( *start != *end )
		{
			break;
		}
		start++;
		end--;
	}
	
	if(start < end)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	char Arr[40];
	cout<<"Enter string :-"<<endl;
	scanf("%[^'\n']s",Arr);
	
	bool bRet = false;
	
	bRet = CheckPallindrom(Arr);
	
	if(bRet == true)
	{
		cout<<"String is pallindrom"<<endl;
	}
	else
	{
		cout<<"String is not pallindrom"<<endl;
	}
	
	return 0;
}