//Accept String from user and count spaces

#include<iostream>
using namespace std;

int CountSpace(char str[])
{
	int iCnt = 0;
	
	while(*str!='\0')
	{
		if(*str ==' ')
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
	
	iRet = CountSpace(Arr);
	cout<<"Count of spacebar is:"<<iRet<<endl;
	
	return 0;
}