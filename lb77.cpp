//Accept character from user and check wheather character is captial or not
#include<iostream>
using namespace std;

class Operations
{
	public :
	bool CheckSmall(char iNo)
	{
		if(iNo == '\0')
		{
			printf("Enter something");
			return false;
		}
		
		int iCnt = 0;
		
		if((iNo >= 'a') && (iNo <= 'z'))
		{
			iCnt++;
		}
		
		if(iCnt != 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	char ch = '\0';
	bool bRet = false;
	
	cout<<"Enter the character"<<endl;
	cin>>ch;
	
	Operations op;
	
	bRet = op.CheckSmall(ch);
	
	if(bRet == true)
	{
		cout<<"character is small";
	}
	else
	{
		cout<<"character is not small";
	}
	
	return 0;
}