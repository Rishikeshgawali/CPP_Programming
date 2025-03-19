//Accept the string from user and covert it into lower case

#include<iostream>
using namespace std;

int strlwrX(char str[])
{
	
	while(*str!='\0')
	{
		if((*str>='A')&& (*str<='Z'))
		{
			*str = *str+32;
		}
		str++;
	}
	
}

int main()
{
	char Arr[20];
	
	cout<<"Enter a String"<<endl;
	cin.getline(Arr,20);
	
	strlwrX(Arr);
	cout<<"String in Lower case :"<<Arr<<endl;
	
	return 0;
}
