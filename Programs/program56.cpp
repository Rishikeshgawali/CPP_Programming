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
		
		SinglyLL();
		void InsertFirst(T);
		void InsertLast(T);
		void InsertAtPos(T,int);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		
		void Display();
		int CountNode();
};

template<class T>
SinglyLL<T>::SinglyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
	struct node <T>* newn = NULL;
	newn = new node<T>;
	
	newn->data = no;
	newn->next = NULL;
	
	if(Head == NULL)
	{
		Head= newn;
	}
	else
	{
		newn->next = Head;
		Head = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
	struct node <T>* newn = NULL;
	newn = new node<T>;
	
	newn->data = no;
	newn->next = NULL;
	
	if(Head == NULL)
	{
		Head= newn;
	}
	else
	{
		struct node<T>*temp = Head;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertAtPos(T no,int pos)
{
	int Size = 0;
	Size = CountNode();
	
	if((pos<1)||(pos>Size+1))
	{
		return;
	}
	
	if(pos==1)
	{
		InsertFirst(no);
	}
	else if(pos==Size+1)
	{
		InsertLast(no);
	}
	else
	{
		struct node <T>* newn = NULL;
		struct node <T>* temp = Head;
		newn = new node<T>;

		newn->data = no;
		newn->next = NULL;
		
		for(int i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
		
		Count++;
	}
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
	struct node<T>*temp = Head;
	if(Head == NULL)
	{
		return;
	}
	else
	{
		Head = Head->next;
		delete temp;
	}
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
	struct node<T>*temp = Head;
	if(Head == NULL)
	{
		return;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp = temp->next;
		}
		delete (temp->next);
		temp->next = NULL;
	}
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{
	int Size = 0;
	Size = CountNode();
	
	if((pos<1)||(pos>Size))
	{
		return;
	}
	
	if(pos==1)
	{
		DeleteFirst();
	}
	else if(pos==Size)
	{
		DeleteLast();
	}
	else
	{
	
		struct node <T>* temp = Head;
		struct node <T>* tempdelete = Head;
		
		for(int i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		tempdelete = temp->next;
		temp->next = temp->next->next;
		delete tempdelete;
		
		Count--;
	}
}

template<class T>
void SinglyLL<T>::Display()
{
	cout<<"Elements from Linked List are:"<<endl;
	struct node<T>*temp = Head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;
}


int main()
{
	SinglyLL<int>obj1;
	SinglyLL<float>obj2;
	
	obj1.InsertFirst(21);
	obj1.InsertFirst(11);
	obj1.InsertLast(51);
	obj1.InsertLast(101);
	obj1.Display();
	cout<<"Number of nodes:"<<obj1.CountNode()<<endl;
	obj1.InsertAtPos(75,3);
	obj1.Display();
	cout<<"Number of nodes:"<<obj1.CountNode()<<endl;
	obj1.DeleteAtPos(3);
	obj1.Display();
	cout<<"Number of nodes:"<<obj1.CountNode()<<endl;
	obj1.DeleteFirst();
	obj1.DeleteLast();
	obj1.Display();
	cout<<"Number of nodes:"<<obj1.CountNode()<<endl;
	
	obj2.InsertFirst(21.11);
	obj2.InsertFirst(11.11);
	obj2.InsertLast(51.11);
	obj2.InsertLast(101.11);
	obj2.Display();
	cout<<"Number of nodes:"<<obj2.CountNode()<<endl;
	obj2.InsertAtPos(75.11,3);
	obj2.Display();
	cout<<"Number of nodes:"<<obj2.CountNode()<<endl;
	obj2.DeleteAtPos(3);
	obj2.Display();
	cout<<"Number of nodes:"<<obj2.CountNode()<<endl;
	obj2.DeleteFirst();
	obj2.DeleteLast();
	obj2.Display();
	cout<<"Number of nodes:"<<obj2.CountNode()<<endl;
	
	return 0;
}