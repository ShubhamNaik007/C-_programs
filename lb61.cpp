//Accept numbers from user and accept one number from user and check that first occurance of that number
#include<iostream>
using namespace std;

class ArrayOpearations
{
	public :
		int *Arr = NULL;
		int iSize = 0;
		ArrayOpearations(int iNo)
		{
			iSize = iNo;
			Arr = new int[iSize];
			
			if(Arr != NULL)
			{
				printf("Arrat created successfully \n");
			}
			else
			{
				printf("unnable to create array \n");
			}
		}
		
		void Accept()
		{
			printf("Enter numbers - \n");
			int i = 0;
			for(i = 0 ; i < iSize ; i++)
			{
				scanf("%d",&Arr[i]);
			}
		}
		
		void Display()
		{
			printf("You entered numbers is - \n");
			int i = 0;
			for(i = 0 ; i < iSize ; i++)
			{
				printf("%d \n",Arr[i]);
			}
		}
		
		int FirstOccurance(int iSearch)
		{
			int i = 0 , iCnt = 0;
			for(i = 0 ; i < iSize ; i++)
			{
				if(Arr[i] == iSearch)
				{
					break;
				}
			}
			if(i == iSize)
			{
				return -1;
			}
			else
			{
				return i;
			}
		}
};

int main()
{
	int iValue = 0 , i = 0 , iRet = 0;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	ArrayOpearations aobj(iValue);
	aobj.Accept();
	aobj.Display();
	
	cout<<"Enter number for search"<<endl;
	cin>>iRet;
	
	iRet = aobj.FirstOccurance(iRet);
	
	if(iRet == -1)
	{
		printf("Number is not present \n");
	}
	else
	{
		cout<<"Number is present at position "<<iRet;
	}
	
	return 0;
}