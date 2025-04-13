#include <iostream>	
using namespace std;
//������ ������ �����ε��� ���� ����

//1. ���� ������ ++, --

class Dot
{
private:
	int x;
	int y;
public:
	//�Ű������� x=0 ó�� ���� �����Ǿ��ִ� ��츦 ����Ʈ �Ű�������� �θ���
	// x�� y�� ���� ���� �ʾ��� ��쿡 ���� �⺻ �� ���� �뵵
	// ex) Dot d(1,5) --> [1, 5]
	// ex) Dot d(1) --> [1]
	// ex) Dot d --> [0,0]
	Dot(int x = 0, int y = 0) : x(x), y(y) {}
	

	void info()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	// ���� ++ ����
	// ++a
	// a�� ���� +1�� ���� ���� �� ���� ���� ó��
	//a=7 �̶�� ++a - 3 : a=8,  ��� =5
	Dot &operator++(void) //((���� ������ ���� ����))
	{
		x++;
		y++;
		return (*this);
	}
	// ����++ ����
	// a++
	// a�� ���� -1�� ���� ���� �� ���� ���� ó��
	//a=7 �̶�� a++ - 3 : a=8, ��� = 4
	const Dot operator++(int)
	{
		// ���� ������ �������� ������ ���� (�� ���� �������� ����)
		const Dot temp(*this); //((*this�� �ڱ��ڽ��� �ǹ�))
		// x,y�� ���� ��� ó��
		x++;
		y++;
		// ������(������ ������ ������)�� return��
		return temp;
	}
};

class Point
{
private:
	int value1;
	int value2;
public:
	Point(int value1 =0 , int value2 =0 ) :value1(value1), value2(value2) {}
	void Info() { cout << value1 << " " << value2 << endl; }

	//1. ������ �����ε��� ���� ���� �����ڿ� ���� �۾��� �����ϴ� ���
	// ���� ���� : ���纻�� ������ ���� ������ �����ϴ� ���, �� ���� ���� ����Ű�� �ּ� ���� �����ϴ� ����
	// Ư¡ : �ν��Ͻ�(Ŭ������ ������ �����)�� �޸𸮿� ���� �������� �ʰ�, �ּ� ���� ������ ���� ��ġ�� ����Ű�� ��
	Point& operator=(const Point& ref)
	{
		value1 = ref.value1;
		value2 = ref.value2;
		return *this;
	}

};
/*
// 2. 
// ���� ���� : ��ü�� ���� ����, ��ü�� ���� ��� ������ ���� �����ϴ� ����
// Ư¡ : ���Ӱ� �����Ҵ��� �ް�, ������ �����ͷ� ����
// �ַ� ���ڿ��� ���� �۾����� ���
class Sample
{
private:
	string name;
public:
	Sample(const string& name) :name(name)
	{

	}
	//���� ������ �����ε�(���� ����)
	Sample& operator=(const Sample& ref)
	{
		//1. �ڱ� �ڽſ��� ���� ó��
		if (this == &ref)
			return *this;

		name = ref.name;
		return *this;
	}
	//C++ ��������, ������ C��� ������ Ǯ�̹� (char * )�� ���� ��찡 ���� ����
	// ������ string�� ������ char* ��ĺ��� �� �����ϰ�, �ڵ����� �������ָ�, �������� ���� ����������
	// stirng�� ���°��� ����
	//
	//���� name�� string�� �ƴ� char�̿��ٸ�
	//Sample& operator =(const Sample& ref)
	//{
	//	if (this == &ref)
	//		return *this;
	//
	//	// ������ �ִ� �ڿ��� ���� ����
	//	delete[] name;
	//
	//	//���ڿ��� ���� ���� ����
	//	int length = strlen(ref.name) + 1;
	//	name = new char[length];
	//	//���ڿ� ����
	//	// strcpy_s(������, ����, ���氪);
	//	strcpy_s(name, len, ref.name);
	//
	//}
};*/

class Point2
{
private:
	int x, y;
public:
	Point2(int x = 0, int y = 0) :x(x), y(y) {}
	void Info() { cout << x << " " << y << endl; }

	Point2 operator-() //a-b�� �ƴ� �׳� a ��ü�� -�� ���̴� �����̱� ������, ����� ���� ����
	{
		Point2 result(-x, -y);
		return result;
	}

	Point2 operator~()
	{
		Point2 result(y, x);
		return result;
	}
};


int main()
{
	Point pos1(1, 2);
	Point pos2 = pos1; // ����

	Point pos3(3, 4);
	pos3 = pos1; // ����

	pos1.Info();
	pos2.Info();
	pos3.Info();


	// ���� Point2 ����
	Point2 p1(1, 2);
	Point2 p2 = -p1;

	p2.Info(); (-1, -2);

	Point2 p3 = ~p2;
	p3.Info();

	return 0;
}