#include <iostream>
using namespace std;

// ���� ���� �Լ�
// virtual ��ȯŸ�� ������(�Ű�����) = 0;
// ���� �Լ� �߿��� ����� �������� �ʰ� 0�� �����ؼ�, ������� �Լ�

// �߻� Ŭ���� (abstract class)
// ���� ���� �Լ��� 1���� ������ �ִ� Ŭ����
// Ư¡) �ش� Ŭ������ ��ӹ޾� ��������� Ŭ������ �ݵ��
//		���� �Լ��� ���� �����Ǹ� �����ؾ� ����� �� ����

// ��� ����
// 1. ���� �Լ��� �⺻������ �����Ǹ� ������ �����ϴ� �ڵ��̹Ƿ�
//    ���� ��ɱ��� �������� �ʿ䰡 ���� ����
// 2. �����Լ��� ���� ������ ������ �������� ���� ������ �ޱ� ����
//    �������� ������ ���� �߻�

class Item
{
public:
	virtual void Info() = 0;
	virtual void sample()
	{
		cout << "���� ���" << endl;
	}
};
class Potion : public Item
{
public:
	void Info()
	{
		//((�̰� ������ ����))
	}
};
// ���� �����Լ��� ����
// 1. �����ڴ� �������� ������� �� ����
// 2. ������ ���������� �ʰ� ����ȭ�� ���߷� ������ �� ����
// 3.�����ڴ� ���¿� ���� ���踦 ������� �ʰ� ���� ���� ������ ������� ���� ���� ����

//��������) Ŭ���� ����
// ���� ���
//====================================
// �� ������ �̸��� �ٳ���
// ���� 10���� ������ ����
//======================================
//�� ������ �̸��� ���
// ���� 5�� ������ ����

class Fruit
{
public:
	string name;
	int count;
	virtual void show() = 0;
};


class Banana : public Fruit
{
public:
	Banana(string name, int count)
	{
		this->name = name;
		this->count = count;
	}
	void show()
	{
		cout << "�� ������ �̸��� " << name << endl;
		cout << count << "��" << endl;
	}
};

class Apple : public Fruit
{
public:
	Apple(string name, int count)
	{
		this->name = name;
		this->count = count;
	}
	void show()
	{
		cout << "�� ������ �̸��� " << name << endl;
		cout << count << "��" << endl;
	}
};

int main()
{
	Item* item = new Potion();

	Fruit* fruit = new Banana("�ٳ���", 10);
	fruit->show();
	fruit = new Apple("���", 5);
	fruit->show();
	return 0;
}