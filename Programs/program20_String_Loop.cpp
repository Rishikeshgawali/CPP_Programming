//Accept String from user and count number of letters from string.

#include<iostream>
using namespace std;

int strlenX(char str[])
{
	int iCnt = 0;
	
	while(*str!='\0')
	{
		iCnt++;
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
	
	iRet = strlenX(Arr);
	cout<<"String length is:"<<iRet<<endl;
	
	return 0;
}