//Accept the string from user and covert it into upper case

#include<iostream>
using namespace std;

int struprX(char str[])
{
	
	while(*str!='\0')
	{				
		if((*str>='a')&& (*str<='z'))
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
	
	struprX(Arr);
	cout<<"String in Upper case :"<<Arr<<endl;
	
	return 0;
}