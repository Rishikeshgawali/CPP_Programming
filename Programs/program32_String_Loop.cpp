//Accept the string from user and reverse the string in place...			//reverse at same place

#include<iostream>
using namespace std;

int strrevX(char *str)
{
	char *start = str;
	char *end = str;
	char temp;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)		//start<=end
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}


int main()
{
	char Arr[20];
	
	cout<<"Enter a String"<<endl;
	cin.getline(Arr,20);
	
	strrevX(Arr);
	cout<<"String After reverse :"<<Arr<<endl;
	
	return 0;
}
