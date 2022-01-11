// accept 5 numbers from user and display summation of total even and odd numbers
#include<iostream>
using namespace std;

class ArrayOpearations
{
	public : 
		int *ptr;
		ArrayOpearations(int iNo)
		{
			ptr = new int[iNo];
			if(ptr != NULL)
			{
				cout<<"Created Successfully"<<endl;
			}
			else
			{
				cout<<"Unnable to create array"<<endl;
				exit(0);
			}
		}
		
		void Accept(int iNo)
		{
			cout<<"Enter numbers -"<<endl;
			int i = 0;
			for(i = 0 ; i < iNo ; i++)
			{
				cin>>ptr[i];
			}
		}
		
		void Display(int iNo)
		{
			cout<<"You entered numbers are -"<<endl;
			int i = 0;
			for(i = 0 ; i < iNo ; i++)
			{
				cout<<ptr[i]<<" ";
			}
			cout<<endl;
		}
		
		int CheckEvenCount(int iNo)
		{
			int i = 0 , iCnt = 0;
			for(i = 0 ; i < iNo ; i++)
			{
				if(ptr[i] % 2 == 0)
				{
					iCnt++;
				}
			}
			return iCnt;
		}
		
		int CheckOddCount(int iNo)
		{
			int i = 0 , iCnt = 0;
			for(i = 0 ; i < iNo ; i++)
			{
				if(ptr[i] % 2 != 0)
				{
					iCnt++;
				}
			}
			return iCnt;
		}
		
		int OddSum(int iNo)
		{
			int i = 0 , iSum = 0;
			for(i = 0 ; i < iNo ; i++)
			{
				if(ptr[i] % 2 != 0)
				{
					iSum = iSum + ptr[i];
				}
			}
			return iSum;
		}
		
		int EvenSum(int iNo)
		{
			int i = 0 , iSum = 0;
			for(i = 0 ; i < iNo ; i++)
			{
				if(ptr[i] % 2 == 0)
				{
					iSum = iSum + ptr[i];
				}
			}
			return iSum;
		}
		
		~ArrayOpearations()
		{
			free(ptr);
		}
};

int main()
{
	int iSize = 0 , iResult = 0; 
	int  iEvenCnt = 0 , iOddCnt = 0 , iOddSum = 0 , iEvenSum = 0; 
	
	cout<<"Enter size of array"<<endl;
	cin>>iSize;
	
	ArrayOpearations aobj(iSize);
	aobj.Accept(iSize);
	aobj.Display(iSize);
	
	iEvenSum = aobj.EvenSum(iSize);	
	cout<<"Summation number of even elements from array is "<<iEvenSum<<endl;
	
	iOddSum = aobj.OddSum(iSize);	
	cout<<"Summation number of odd elements from array is "<<iOddSum<<endl;

	iResult = iEvenSum+iOddSum;
	cout<<"Summation number of odd and even elements from array is "<<iResult<<endl;
	
	return 0;
}