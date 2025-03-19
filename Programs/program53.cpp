//Generic Singly Linked List.
#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node*next;
};

//typedef is not allowed in template

template<class T>
class SinglyLL
{
	public:
		struct node<T>*Head;	//
		int Count;
};

int main()
{
	SinglyLL<int>obj1;
	
	SinglyLL<float>obj2;
	
	return 0;
}