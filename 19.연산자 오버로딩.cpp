#include <iostream>
using namespace std;

//1. C++�� Ŭ���� ����� ���Ǽ��� ���� �����ڿ� ���� �����Ǹ� ������ �� ����
// 2. C++�� �����Լ�, Ŭ������ ���� ������ �����ε��� ����

// ���ǻ���
// 1. �������� ��� �� ��ü�� ��������� ����
// 2. C++���� �������� �ʴ� �����ڸ� ������δ� ������ �� ����

class Product
{
public:
	int count;
	Product(int count) :count(count) {}
	// �Լ� �ڿ� �ٴ� const�� �� �Լ� ������ ����� ���� ������ �� �� ������ ���� ((���Ŵ� ����))
	//Product �ڿ� ���� &������(reference)��, call by reference
	Product operator+(Product& other /*with who*/) const
	{
		//count = 5; // �� ������ �� �� ���⿡ ����� ������ ������ �� ����
		Product result(count + other.count);
		return result;
	}
	Product operator-(Product& other /*with who*/) const 
	{
		Product result(count - other.count);
		return result;
	}

	void Info()
	{
		cout << count << endl;
	}
};

//�����Լ��ν��� ������ �����ε�
void operator+(Product product) //void operator+(Product& product)�� �Ǹ� �� �޶���!!!!!!
{
	product.count++;
	cout << "+����" << endl;
}

int main()
{
	Product A(10);
	Product B(5);
	Product C = A + B;
	Product D = A - B;

	A.Info();
	B.Info();
	C.Info();
	D.Info();


	+A;
	A.Info();
	return 0;
}