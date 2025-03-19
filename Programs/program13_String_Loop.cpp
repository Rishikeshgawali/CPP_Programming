#include<iostream>
using namespace std;

//using for loop.

int main()
{
	char Arr[]="Hello";
	int i = 0;
	
	for(i = 0;Arr[i]!='\0';i++)
	{
		cout<<Arr[i]<<endl;
	}
	return 0;
}