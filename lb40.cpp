// accept 5 numbers from user and display it 
#include<iostream>
using namespace std;

class ArrayOpearations
{
	public : 
		int *ptr = NULL;
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
		
		~ArrayOpearations()
		{
			free(ptr);
		}
};

int main()
{
	int iSize = 0;
	
	cout<<"Enter size of array"<<endl;
	cin>>iSize;
	
	ArrayOpearations aobj(iSize);
	aobj.Accept(iSize);
	aobj.Display(iSize);
	
	return 0;
}