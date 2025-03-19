//We are dealing with 2 strings

//Accept 2 string from user and compare strings.

#include<iostream>
using namespace std;

bool strcmpX(char *src , char *dest)
{
	while((*src!='\0') && (*dest!='\0'))
	{
		if(*src!=*dest)
		{
			break;
		}
		src++;
		dest++;
	}
	
		if(*src=='\0' && *dest == '\0')
		{
			return true;
		}
		else
		{
			return false;
		}
	
}


int main()
{
	char Arr[20];	//bhrleli vahi(src)
	char Brr[20];	//kori vahi(dest)
	bool bRet;
	
	
	cout<<"Enter first String"<<endl;
	cin.getline(Arr,20);
	
	cout<<"Enter second String"<<endl;
	cin.getline(Brr,20);
	
	bRet = strcmpX(Arr,Brr);
	
	if(bRet == true)
	{
		cout<<"String are equal"<<endl;
	}
	else
	{
		cout<<"String are not equal"<<endl;
	}
	return 0;
}