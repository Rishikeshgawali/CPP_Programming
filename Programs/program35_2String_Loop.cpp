//We are dealing with 2 strings

//Accept the 2 string from user and perform concatination

#include<iostream>
using namespace std;

int strcpyX(char *src , char *dest)
{
	while(*src!='\0')
	{
		src++;
	}
	
	while(*dest!='\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	*src = '\0';	//imp
}


int main()
{
	char Arr[20];	//bhrleli vahi(src)
	char Brr[20];	//kori vahi(dest)
	
	cout<<"Enter first String"<<endl;
	cin.getline(Arr,20);
	
	cout<<"Enter second String"<<endl;
	cin.getline(Brr,20);
	
	strcpyX(Arr,Brr);
	cout<<"String After concatination :"<<Arr<<endl;
	
	return 0;
}
