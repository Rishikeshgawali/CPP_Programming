#include<iostream>
using namespace std;

class ArrayX
{
	private:
		int *Arr;
		int iSize;
	
	public:
		ArrayX(int iValue)				//Parameterised
		{
			this->iSize = iValue;
			Arr = new int[iSize];		//Resource
		}
		
		~ArrayX()						//Destructor
		{
			delete []Arr;				//Deallocate Resource
		}
		
		void Accept()
		{
			int iCnt=0;
			cout<<"Enter the Elements:"<<endl;
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}
		void Display()
		{
			int iCnt=0;
			cout<<"Elements of Array are:"<<endl;
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				cout<<Arr[iCnt];
			}
		}
		
		int Summation()
		{
			int iSum=0;
			int iCnt=0;
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				iSum = iSum + Arr[iCnt];
			}
			return iSum;
		}
};

int main()
{
	int iRet=0;
	
	ArrayX obj1(5);
	obj1.Accept();		// Accept(&obj1)        Accept(100);
	obj1.Display();		// Display(&obj1)       Display(100);
	
	iRet = obj1.Summation();
	
	cout<<"Addition is :"<<iRet<<endl;
	
	return 0;
}
