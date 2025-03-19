#include<iostream>
using namespace std;
class Number
{
	private:
	//characteritics
	int iNo;		
	
	public:
	//behaviors
	void Accept()		//setter
	{
		cout<<"Entetr a value:";
		cin>>this->iNo;
	}
	
	void Display()		//getter
	{
		cout<<"Value is:"<<this->iNo<<endl;
	}
	int Factorial()
	{
		int iFact=1;
		int iCnt=0;
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			iFact*=iCnt;	//shorthand assignmment operator	//iFact = iFact*iCnt;
		}
		return iFact;
	}
};

int main()
{
	Number nobj;
	int iRet=0;
	
	//cout<<nobj.iNo;
	
	nobj.Accept();
	nobj.Display();
	
	iRet= nobj.Factorial();
	
	cout<<"Factorial is:"<<iRet<<endl;
	return 0;
}