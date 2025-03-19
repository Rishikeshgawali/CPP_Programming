//Accept String from user and count Vowels.(a,e,i,o,u)

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int iCnt = 0;
	
	while(*str!='\0')
	{					//case sensitive
		if((*str=='a')|| (*str=='e')|| (*str=='i')||(*str=='o')||(*str=='u'))
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