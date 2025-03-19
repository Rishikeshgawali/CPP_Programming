//Accept N numbers and Display Maximum Value

#include<iostream>
using namespace std;

int Maximum(int Arr[],int size)
{
	int i = 0;
	int MAX = Arr[0];
	for(i = 0;i<size;i++)
	{
		if(MAX<Arr[i])
		{
			MAX = Arr[i];
		}
	}
	return MAX;
}

int main()
{
	int iRet = 0;
	
	int Brr[] = {10,20,30,40,50};
	
	iRet = Maximum(Brr,5);
	cout<<"Maximum element is:"<<iRet;
	return 0;
}