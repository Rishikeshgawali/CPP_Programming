//Accept the string from user and Toggle the case.

#include<iostream>
using namespace std;

int strtoggleX(char *str)
{
	
	while(*str!='\0')
	{				
		if((*str>='A')&& (*str<='Z'))
		{
			*str = *str+32;
		}
		else if((*str>='a')&& (*str<='z'))
		{
			*str = *str-32;
		}
		str++;
	}
	
}

int main()
{
	char Arr[20];
	
	cout<<"Enter a String"<<endl;
	cin.getline(Arr,20);
	
	strtoggleX(Arr);
	cout<<"String in Upper case :"<<Arr<<endl;
	
	return 0;
}

//abcd
//ABCD 
//abCd@123