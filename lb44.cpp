// accept 5 numbers from user and display its sum and average and find largest element from array
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
		
		int Addition(int iNo)
		{
			int i = 0 , iSum = 0;
			for(i = 0 ; i < iNo ; i++)
			{
				iSum = iSum + ptr[i];
			}
			return iSum;
		}
		
		int Average(int iNo1 , int iNo2)
		{
			int iResult = 0;
			iResult = iNo1 / iNo2;
			return iResult;
		}
		
		int Maximum(int iNo)
		{
			int i = 0 , iMax = 0;
			int iRet = ptr[i];
			for(i = 0 ; i < iNo ; i++)
			{
				if(iRet < ptr[i])
				{
					iRet = ptr[i];
				}
			}
			return iRet;
		}
		
		int Minimum(int iNo)
		{
		int i = 0 , iMax = 0;
		int iRet = ptr[i];
		for(i = 0 ; i < iNo ; i++)
		{
			if(iRet > ptr[i])
			{
				iRet = ptr[i];
			}
		}
		return iRet;
		}
		
		~ArrayOpearations()
		{
			free(ptr);
		}
};

int main()
{
	int iSize = 0 , iRet = 0 , iAvg = 0 ; 
	int iMax = 0 , iMin = 0; 
	
	cout<<"Enter size of array"<<endl;
	cin>>iSize;
	
	ArrayOpearations aobj(iSize);
	aobj.Accept(iSize);
	aobj.Display(iSize);
	iRet = aobj.Addition(iSize);
	
	cout<<"Addition is "<<iRet<<endl;
	
	iAvg = aobj.Average(iRet , iSize);
	cout<<"Average is "<<iAvg<<endl;

	iMax = aobj.Maximum(iSize);
	cout<<"Maximum number from array is "<<iMax<<endl;
	
	iMin = aobj.Minimum(iSize);
	cout<<"Minimum number from array is "<<iMin<<endl;
	return 0;
}