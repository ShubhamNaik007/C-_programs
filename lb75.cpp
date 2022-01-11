//ASCII Table
#include<iostream>
using namespace std;

void DisplayTable()
{
	int i = 0;
	cout<<"--------ASCII Table---------"<<endl;
	cout<<"----------------------------"<<endl;
	for(i = 0  ; i <= 127 ; i++)
		printf("%d \t %c \t %o \t %x \n",i,i,i,i);
}

int main()
{
	DisplayTable();
	return 0;
}