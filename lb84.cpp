//Accept string and count Capital and small letters in it.
#include<iostream>
using namespace std;

void CountCapSmall(char *str)
{
	int CCnt = 0 , SCnt = 0;
	while(*str != '\0')
	{
		if( (*str >= 'A') && (*str <= 'Z') )
		{
			CCnt++;
		}
		else if( (*str >= 'a') && (*str <= 'z') )
		{
			SCnt++;
		}
		str++;
	}
	cout<<"Capital  letters are "<<CCnt<<endl;
	cout<<"Small  letters are "<<SCnt<<endl;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter the String :- \n";
	scanf("%[^'\n']s",Arr);
	
	CountCapSmall(Arr);
	
	return 0;
}