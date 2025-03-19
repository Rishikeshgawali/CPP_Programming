//Accept N numbers and Display Maximum Value---generic

#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[],int size)
{
	int i = 0;
	T MAX = Arr[0];
	for(i=0;i<size;i++)
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
	int iRet;
	int Brr[] = {10,20,30,40,50};
	iRet = Maximum(Brr,5);
	cout<<"Maximum element is:"<<iRet<<endl;
	
	float fRet;
	float Crr[] = {1.10,2.20,3.30,4.40,5.50};
	fRet = Maximum(Crr,5);
	cout<<"Maximum element is:"<<fRet<<endl;

	
	char Drr[] = {'A','B','C','D','E'};
	char cRet = Maximum(Drr,5);
	cout<<"Maximum element is:"<<cRet;
	return 0;
}