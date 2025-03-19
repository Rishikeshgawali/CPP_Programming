//Accept String from user and count Vowels.(A,E,I,O,U)

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int iCnt = 0;
	
	while(*str!='\0')
	{					//case insensitive
		if((*str=='a')|| (*str=='e')|| (*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')|| (*str=='E')|| (*str=='I')||(*str=='O')||(*str=='U'))
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
	cout<<"Count of spacebar is:"<<iRet<<endl;
	
	return 0;
}