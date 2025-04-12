#include <iostream>
using namespace std;
//1. private, public, protected ���

class A
{
public:
	int a;
protected:
	int b;
private:
	int c;
};
class B :public A 
{

};
class C  :protected A
{

};
class D :private A 
{

};

// ���
// class Ŭ������ : ���������� ����Ŭ������
//{
//
//}

//���������ڿ� ���� ��� ����
// ������� ������ ���� �����ں��� ���� ������ ū ����� �ش� ���� �����ڷ� �������� ��
// ���� ������ public > protected > private ��
//					  public ���		 protected ���	     	private ���
// public	   ���		   public			   protected              private
// protected   ���       protected           protected             private
// private     ���       ���� �Ұ�             ���� �Ұ�             ���� �Ұ�


// 2. ���༺(polymorphism)
//  �ϳ��� ��ü�� ��� ���¸� ǥ���ϴ� ���� ���
// ������� ������ Ŭ���� �� ���� Ŭ������ ���� Ŭ������ ���·� ������ ����
//  ex) Animal* animal = new Lion();
//      Animal* animal = new Penguin(); (( ���ڿ� ����, ��ϰ� ������ ��ġ (����) ����))
// 
// 1. ���� Ŭ����(�⺻ Ŭ����)�� ����
class Animal
{
public:
	void info()
	{
		cout << "������ �Ұ��� ������ �κ�" << endl;
	}
	//2. vitrual �Լ��� ���� ������ ����
	//vitrual(����) �Լ��� vitrual Ű���尡 ���� �Լ��� �ǹ�
	// ���� �Լ��� ��ӹ޴� Ŭ�������� ������ �� ������ ����Ǵ� �Լ��� �ǹ�
	// ���� Ŭ����(�ڽ� Ŭ����)�ʿ��� cry()�� �������ϸ�, Animal�� cry�� �ƴ� ���� ���� Ŭ������ cry() �� �۵�

	virtual void cry()
	{
		cout << "������ �����Ҹ��� �ۼ��� �κ�" << endl;
	}
};

//3. ���� Ŭ���� ����
class Lion :public Animal 
{
	void inof()
	{
		cout << "�����Ӥ�" << endl;
	}
	//�����Ǹ� �� ��쿡�� vitrual�� ���� ���� ����
	void cry()
	{
		cout << "���̾ƾ�" << endl;
	}
};
int main()
{
	A a;
	B b;
	C c;
	D d;

	// 4. ���� Ŭ���� ����
	Animal* animal = new Animal();
	animal->cry();
	animal->info();


	// ǥ���ϰ� ���� �ٸ� ���·� ����
	animal = new Lion();
	animal->cry();
	animal->info();

	// �Ϲ����� ���� ����� ���(���� �Ҵ��� �ƴ� ���)
	// Lion�� ���� ��ü�� ���������ϱ� ������ ������ �ٷιٷ� ����� �� �� �ִ� ���� �Ҵ��� �� ���� �����
	Animal animal2;
	Lion lion;
	animal2.cry();
	animal2.info();

	animal2 = lion;
	animal2.cry();
	animal2.info();

	//�ڵ� ���� ���
	// 1. animal�� cry , info ���
	// 2. animal�� lion���� ���Ӱ� ���� ��, ���� �� cry �� ����ǰ� info�� �״��
	// 3. animal2�� cry, info ���������� ���
	// 4. animal2�� lion ���·� �ٱ��� �����ص� ��ȭ ����
	
	//Ŭ���� Ÿ������ ������� ��ü(������)�� �Ϲ������� ������� ���
	// ȣ���� �Լ��� ��ġ�� �������� �����ǰ� ������
	// ������ �ص� ������ ������ �״�� ����(���� ���ε�)

	// ���� vitrual Ű���带 ���� ���� ��ü�� ����Ű�� �ִ� ��ġ�� ������ �� �ְ� ��������(���� ���ε�)
	
	// ������ ����� ����
	// 1. ���� �ڵ忡�� ���� �ٸ� ���� ����� ���;��ϴ� ���
	// 2. �������� �κп� ���� ����
	// 3. �����Ǹ� ���� ���� ������� Ȯ�强 �ִ� �ڵ� ���迡 ȿ����
	

}