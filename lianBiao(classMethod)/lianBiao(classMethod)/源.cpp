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
	cout << "����ѧ������";
	cin >> number;
	int counter = 1;
	while (counter <= number)
	{
		front = new student;
		cout << "�������" << counter << "λͬѧ��ѧ��:";
		int numID;
		cin >> numID;
		front->setID(numID);
		cout << endl << "�������" << counter << "λͬѧ������:";
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
	cout << "�������������£�" << endl;
	while (p != NULL)
	{
		cout << "ѧ��" << counter << " ѧ�ţ�" << p->getID() << " ������" << p->getName() << endl;
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
		cout << "���б�Ϊ�գ��޷�ɾ���ڵ�" << endl;
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
			cout << "ɾ���ɹ���" << endl;
		}
		else
			cout << "�Ҳ����ýڵ㣡" << endl;
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
	cout << "������Ҫ����ѧ����ѧ����������";
	int id; string name;
	cin >> id >> name;
	temp->setID(id); temp->setName(name);
	head = insertnode(head, temp);
	travel(head);
	cout << "����Ҫɾ��ѧ����ѧ�ţ�";
	cin >> id;
	head = deletenode(head, id);
	travel(head);
	releaselist(head);
	return 0;
}