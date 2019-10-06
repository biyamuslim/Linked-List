#include<iostream>
using namespace std;
#include "list.cpp"
int main()
{
	int val, value, v;
	
	list my_linked_list;
	//	int size;
	my_linked_list.insert(100);
	my_linked_list.insert(150);
	my_linked_list.start();
	my_linked_list.move();
	my_linked_list.insert(1000);

	my_linked_list.display();
	//cout << " The sum = " << my_linked_list.Sum() << endl;
	/*my_linked_list.search(150);
	my_linked_list.delete_node(250);
	my_linked_list.display();*/

	
	//list myLinkedList;

	/*myLinkedList.insertAtEnd(100);
	myLinkedList.insert(15);
	myLinkedList.insert(10);
	myLinkedList.insert(20);
	myLinkedList.insert(45);
	myLinkedList.display();

	myLinkedList.insertAtBegin(32);
	cout << " The LIst is :" << endl;
	myLinkedList.display();
	myLinkedList.start();
	myLinkedList.move();
	myLinkedList.move();
	myLinkedList.update(67);

	myLinkedList.display();

	myLinkedList.start();
	myLinkedList.insertAtEnd(1000);

	cout << " Now my Link List is " << endl;
	myLinkedList.start();
	//cout<<myLinkedList.get()<<endl;
	myLinkedList.move();
	//cout<<myLinkedList.get()<<endl;
	myLinkedList.move();
	myLinkedList.update(67);
	cout << " Link list :" << endl;
	myLinkedList.display();
	
	
	
	//cout << " Enter the value you want to search " << endl;
	//cin >> val;
	/*if (searchNode(val))
	{
		cout << " Value is found " << endl;

	}*/
	//else
		//cout << " Value is not found " << endl;
	//cout << " Enter the value after which node should be added :" << endl;
	//cin >> value;
	//myLinkedList.insertAfter(value, 11);
	/*cout << " Sum of all the values of the list  :" << endl;
	myLinkedList.Sum();
	myLinkedList.display();
	cout << " Enter the value you want to delete " << endl;
	cin >> v;
	myLinkedList.delete_Node(v);
	cout << " After deleting " << endl;
	myLinkedList.display();
	//cout<<myLinkedList.get()<<endl;
	//cout<<myLinkedList.getSize()<<endl;*/
	system("pause");
	return 0;
}
