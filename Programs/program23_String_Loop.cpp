//Accept String from user and count Capital letters
#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int iCnt = 0;
	
	while(*str!='\0')
	{
		if((*str>='A') && (*str<='Z'))
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
	
	iRet = CountCapital(Arr);
	cout<<"Count of Capital Characters is:"<<iRet<<endl;
	
	return 0;
}