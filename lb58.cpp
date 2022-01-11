//Accept numbers from user and check wheather 11 is present in that numbers or not
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
		
		bool Search()
		{
			int i = 0 ; 
			bool bRet = false;
			for(i = 0 ; i < iSize ; i++)
			{
				if(Arr[i] == 11)
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
	int iValue = 0 , i = 0;
	bool bRet = false;
	
	cout<<"Enter number"<<endl;
	cin>>iValue;
	
	ArrayOpearations aobj(iValue);
	aobj.Accept();
	aobj.Display();
	bRet = aobj.Search();
	
	if(bRet == true)
	{
		printf("11 is present \n");
	}
	else
	{
		printf("11 is not present \n");
	}
	
	return 0;
}