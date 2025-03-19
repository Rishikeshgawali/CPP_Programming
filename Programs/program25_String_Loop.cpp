//Accept String from user and count small letters

#include<iostream>
using namespace std;

int CountSmall(char str[])
{
	int iCnt = 0;
	
	while(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
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
	
	iRet = CountSmall(Arr);
	cout<<"Count of small Characters is:"<<iRet<<endl;
	
	return 0;
}