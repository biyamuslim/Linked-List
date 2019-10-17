#include<iostream>
using namespace std;
#include "Node.cpp"
class list {
	Node *headNode;
	Node *currentNode;
	Node *lastCurrentNode;
	int size;
public:
	list()
	{
		headNode = 0;
		currentNode = 0;
		lastCurrentNode = 0;
		size = 0;

	}
	void insert(int n)
	{ //to insert a node in the linked list
		if (currentNode != 0)
		{
			if (currentNode->getNextNode() == 0)
			{
				Node *newNode = new Node();
				//lastCurrentNode = currentNode;
				currentNode->setnextNode(newNode);
				newNode->setPrevNode(currentNode);
				currentNode = newNode;
				currentNode->setValue(n);
				currentNode->setnextNode(0);
				size++;

			}
			else
			{
				Node *newNode = new Node();
				currentNode->setValue(n);
				newNode->setnextNode(currentNode->getNextNode());
				//lastCurrentNode = currentNode;
				newNode->setPrevNode(currentNode);
				(currentNode->getNextNode())->setPrevNode(newNode);
				currentNode->setnextNode(newNode);
				currentNode = newNode;
				size++;
			}

		}
		else
		{
			Node *newNode = new Node();
			headNode = newNode;
			currentNode = newNode;
			currentNode->setValue(n);
			currentNode->setnextNode(0);
			currentNode->setPrevNode(0);
			size++;
			cout << " First element added in your";
			cout << "list ...!" << endl;

		}
	}



	/*Node delete(int n )
	{
	Node *temp;
	//	for(int i=0;i<size;i++)

		{
			if(getvalue()==n)
			{
			temp=currentNode;
			}
			lastCurrentNode->setNextNode(currentNode->getNextNode());

			delete temp;
			currentNode=lastCurrentNode;
			size--;
		}
	}*/
	void delete_Node(int n)
	{
		start();
		//Node *temp;
		while (currentNode != 0)
		{       //if(headNode->getValue()==n)
		//{

		//}
			if (currentNode->getValue() == n)
			{
				if (currentNode == headNode)
				{
					headNode = currentNode->getNextNode();
					delete currentNode;
					currentNode = headNode;
					size--;
					break;
				}
				else
				{
					Node *temp;
					temp->setnextNode(currentNode->getNextNode());
					temp->setnextNode(currentNode->getPrevNode());
					delete currentNode;
					temp = currentNode;
					size--;
					break;
				}

			}

		}
		move();
	}
	bool  searchNode(int n)
	{
		bool flag = 0;
		start();
		while (currentNode != 0)
		{

			if (currentNode->getValue() == n)
			{
				flag = 1;
			}
		}
		return flag;
	}
	void insertAfter(int val, int n)
	{
		start();
		while (currentNode != 0)
		{
			if (currentNode->getValue() == val)
			{
				Node *newNode = new Node();
				newNode->setnextNode(currentNode->getNextNode());
				currentNode->setnextNode(newNode);
				lastCurrentNode = currentNode;
				currentNode->setValue(n);
				size++;
			}
		}
	}
	void insertAtBegin(int n)
	{
		Node *newNode = new Node;

		newNode->setnextNode(headNode);
		headNode = newNode;
		currentNode = headNode;
		lastCurrentNode = 0;
		currentNode->setValue(n);
		size++;

	}
	void insertAt(int n, int p)
	{
		/*	Node *newNode=new Node();
				newNode->setnextNode(currentNode->getNextNode());
				currentNode->setnextNode(newNode);
				lastCurrentNode=currentNode;
				currentNode->setValue(n);
				size++;	*/

	}
	void Sum()
	{
		start();
		int sum = 0;
		while (currentNode->getValue() != 0)
		{
			sum = sum + currentNode->getValue();
			move();
		}
	}
	/*	void insertAtBegin(int n)
		{
			Node *newNode=new Node();
			headNode=newNode;
			currentNode=newNode;
			currentNode->setValue(n);
			currentNode->setnextNode(0);
			size++;

		}*/
	void insertAtEnd(int n)
	{
		lastCurrentNode = currentNode;
		Node *newNode = new Node();
		if (currentNode)
		{
			currentNode = headNode;
			while (currentNode->getNextNode())
			{
				currentNode = currentNode->getNextNode();
			}
			currentNode->setnextNode(newNode);
		}
		else
		{
			headNode = newNode;
		}
		currentNode = newNode;
		currentNode->setValue(n);
		currentNode->setnextNode(0);
		size++;
	}
	void update(int n)
	{
		currentNode->setValue(n);
	}
	void display()
	{
		Node* temp = headNode;
		cout << "Linked List : ";
		while (temp)
		{
			cout << temp->getValue() << endl;
			temp = temp->getNextNode();
		}
	}
	void start()//bring the current node at the start of the list
	{
		lastCurrentNode = 0;
		currentNode = headNode;
	}
	void move()// move current-node to the next node in the list
	{
		lastCurrentNode = currentNode;
		currentNode = currentNode->getNextNode();

	}
	int get()//give the value of the current node
	{
		return currentNode->getValue();
	}

	int getSize()//give the size of the list
	{
		return size;
	}
	void next()
	{
		if (currentNode->getNextNode() != 0)
		{
			currentNode = currentNode->getNextNode();
		}
	}
		void back()
		{
			if (currentNode->getPrevNode() != 0)
			{
				currentNode = currentNode->getPrevNode();
			}
	
	}

};
