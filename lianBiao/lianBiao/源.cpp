#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
struct student
{
	int id;
	string name;
	student* next;
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
		front->id = numID;
		cout << endl << "�������" << counter << "λͬѧ������:";
		string strName;
		cin >> strName;
		front->name = strName;
		if (head == NULL)
		{
			head = front;
			back = front;
		}
		else
		{
			back->next = front;
			back = front;
		}
		counter++;
	}
	//back->next = NULL;
	return head;
}

void travel(student* head)
{
	student* p = head;
	int counter = 1;
	cout << "�������������£�" << endl;
	while (p != NULL)
	{
		cout << "ѧ��" << counter << " ѧ�ţ�" << p->id << " ������" << p->name << endl;
		p = p->next;
		counter++;
	}
}

student* insertnode(student* head, student* p)
{
	student* front, * back;
	if (head == NULL)
	{
		head = p;
		p->next = NULL;
		return head;
	}
	if (head->id >= p->id)
	{
		p->next = head;
		head = p;
		return head;
	}
	front = back = head;
	while (front != NULL && (front->id < p->id))
	{
		back = front;
		front = front->next;
	}
	p->next = front;
	back->next = p;
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
	if (head->id == id)
	{
		p = head;
		head = head->next;
		delete p;
	}
	else
	{
		back = p = head;
		while (p->id < id && (p->next != NULL))
		{
			back = p;
			p = p->next;
		}
		if (p->id == id)
		{
			back->next = p->next;
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
		head = head->next;
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
	temp->id = id; temp->name = name;
	head = insertnode(head, temp);
	travel(head);
	cout << "����Ҫɾ��ѧ����ѧ�ţ�";
	cin >> id;
	head = deletenode(head, id);
	travel(head);
	releaselist(head);
	return 0;
}