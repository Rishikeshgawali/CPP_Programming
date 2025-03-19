//Accept String from user and count occurence of letter 'l'

#include<iostream>
using namespace std;

int Countl(char str[])
{
	int iCnt = 0;
	
	while(*str!='\0')
	{
		if((*str == 'l')||(*str == 'L'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter a String"<<endl;
	cin.getline(Arr,20);
	
	iRet = Countl(Arr);
	cout<<"count of occurence of l is "<<iRet<<endl;
	
	return 0;
}