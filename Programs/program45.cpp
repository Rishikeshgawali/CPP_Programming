//Accept N numbers and Display----generic

#include<iostream>
using namespace std;

template<class T>
void Display(T Arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<Arr[i]<<endl;
	}
}

int main()
{
	int Brr[] = {10,20,30,40,50};
	Display(Brr,5);
	
	char Crr[] = {'A','B','C','D','E'};
	Display(Crr,5);
	return 0;
}