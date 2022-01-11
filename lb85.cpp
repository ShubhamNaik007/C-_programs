//Accept string and count white spaces
#include<iostream>
using namespace std;

char CountWhiteSpace(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if( *str == ' ')
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
	
	iRet = CountWhiteSpace(Arr);
	
	cout<<"Count white space  "<<iRet<<endl;
	
	return 0;
}