#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class student
{
	int id;
	string name;
	student* next;
public:
	void setID(int input)
	{
		id = input;
	}
	void setName(string input)
	{
		name = input;
	}
	void setNext(student* input)
	{
		next = input;
	}
	int getID()
	{
		return this->id;
	}
	string getName()
	{
		return this->name;
	}
	student* getNext()
	{
		return this->next;
	}

};

student* create()
{
	student* head = NULL, * front = NULL, * back = NULL;
	int number;
	cout << "输入学生数：";
	cin >> number;
	int counter = 1;
	while (counter <= number)
	{
		front = new student;
		cout << "请输入第" << counter << "位同学的学号:";
		int numID;
		cin >> numID;
		front->setID(numID);
		cout << endl << "请输入第" << counter << "位同学的姓名:";
		string strName;
		cin >> strName;
		front->setName(strName);
		if (head == NULL)
		{
			head = front;
			back = front;
		}
		else
		{
			back->setNext(front);
			back = front;
		}
		counter++;
	}
	back->setNext(NULL);
	return head;
}

void travel(student* head)
{
	student* p = head;
	int counter = 1;
	cout << "链表中数据如下：" << endl;
	while (p != NULL)
	{
		cout << "学生" << counter << " 学号：" << p->getID() << " 姓名：" << p->getName() << endl;
		p = p->getNext();
		counter++;
	}
}

student* insertnode(student* head, student* p)
{
	student* front, * back;
	if (head == NULL)
	{
		head = p;
		p->setNext(NULL);
		return head;
	}
	if (head->getID() >= p->getID())
	{
		p->setNext(head);
		head = p;
		return head;
	}
	front = back = head;
	while (front != NULL && (front->getID() < p->getID()))
	{
		back = front;
		front = front->getNext();
	}
	p->setNext(front);
	back->setNext(p);
	return head;
}

student* deletenode(student* head, int id)
{
	student* p, * back;
	if (head == NULL)
	{
		cout << "该列表为空，无法删除节点" << endl;
		return head;
	}
	if (head->getID() == id)
	{
		p = head;
		head = head->getNext();
		delete p;
	}
	else
	{
		back = p = head;
		while (p->getID() < id && (p->getNext() != NULL))
		{
			back = p;
			p = p->getNext();
		}
		if (p->getID() == id)
		{
			back->setNext(p->getNext());
			delete p;
			cout << "删除成功！" << endl;
		}
		else
			cout << "找不到该节点！" << endl;
	}
	return head;
}

void releaselist(student* head)
{
	student* p;
	while (head)
	{
		p = head;
		head = head->getNext();
		delete p;
	}
}

int main()
{
	student* head, * temp;
	head = create();
	travel(head);
	temp = new student;
	cout << "请输入要增加学生的学号与姓名：";
	int id; string name;
	cin >> id >> name;
	temp->setID(id); temp->setName(name);
	head = insertnode(head, temp);
	travel(head);
	cout << "输入要删除学生的学号：";
	cin >> id;
	head = deletenode(head, id);
	travel(head);
	releaselist(head);
	return 0;
}