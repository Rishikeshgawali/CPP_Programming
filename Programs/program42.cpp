//Addition of two values in specific way.

#include<iostream>
using namespace std;

int Addition(int A,int B)
{
	int Ans;
	Ans = A+B;
	return Ans;
}

int main()
{
	int iNo1 = 11,iNo2 = 21;
	int ret = 0;
	
	ret = Addition(iNo1,iNo2);
	
	cout<<"Addition is :"<<ret;
	
	return 0;
}