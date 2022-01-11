//Accept numbers from user and accept one number from user and check that number is present or not
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
		
		bool Search(int iSearch)
		{
			int i = 0 ; 
			bool bRet = false;
			for(i = 0 ; i < iSize ; i++)
			{
				if(Arr[i] == iSearch)
				{
					bRet = true;
					break;
				}
			}
			return bRet;
		}
};

int main()
{
	int iValue = 0 , i = 0 , iRet = 0;
	bool bRet = false;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	ArrayOpearations aobj(iValue);
	aobj.Accept();
	aobj.Display();
	
	cout<<"Enter number for search"<<endl;
	cin>>iRet;
	
	bRet = aobj.Search(iRet);
	
	if(bRet == true)
	{
		cout<<"Number is present "<<endl;
	}
	else
	{
		cout<<"Number is not present "<<endl;
	}
	
	return 0;
}