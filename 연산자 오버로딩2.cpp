#include <iostream>
using namespace std;

// friend ��� ���
// Ŭ������ ��� �Լ��� �ƴϳ�, �ش� Ŭ������ private ���� ������ �� �ְ� ��
// 
//friend ó���� �Լ��� private�� ����� �� �ִ� ��� �Լ��� ������ ������ ����
//
//���ǻ���
// �ش� ����� ������� ���� ���� ��� �����̹Ƿ�, �������� �ʴ� ���� ������ ��
// �� �ʿ��� ��쿡�� ���


//1. friend Ŭ���� ���
// Ŭ������ �ٸ� Ŭ������ friend�ν� ���
// �̷��� �ϸ� �ٸ� Ŭ������  private ����� ���� ����
class A
{
private:
	int secret_value;
public:
	A(int s) :secret_value(s) {}
	friend class B;

	//2. friend �Լ�
	friend void F_Function(A a)
	{
		cout << a.secret_value << endl;
	}
};

class B
{
public:
	void View(A& a)
	{
		cout << a.secret_value << endl;
	}
};

//3. freind�� �̿��� ������ �����ε�
class Complex //���Ҽ� Ŭ���� : ���� a + bi ��� �θ��� ���·� a�� �Ǽ�(real), b�� ���(imaginary)�� �ǹ�
	          // �Ǽ� : �Ϲ����� ���� ���� , ��� : ��ȣ i�� ���� ������ ���� 
	          // ���п��� �Ǽ��� ���� ��ȣ ǥ���� ���� ���
{
public:
	double real;
	double imag;
	Complex(double r = 0.0, double i = 0.0) :real(r), imag(i) {}

	//// ��� �Լ��ν��� �����ε��̶��?
	//Complex operator+(const Complex& other);
	//{
	//	return Complex(real + other.real, imag + other.imag);
	//}
	//
	// bool operator==(const Complex& other) const
	//{
	// return real == other.real && imag == other.imag;
	// }


	//friend�� �̿��� �����ε��̶��?
	// >>Ŭ���� ���ο��� �����ϰ� �ܺο��� ����
	//�ܺο��� ������ ���Ҽ� + ���Ҽ�
	friend Complex operator+(const Complex& a, const Complex& b); //(( �ۿ��� ����ҰŶ� ���� �� �� �ʿ� ( a + b )))
	//�ܺο��� ������ ���Ҽ��� ���� �� (==)
	friend bool operator==(const Complex& a, const Complex& b);
};

// �籸���� ���� friend�� ���� ����
 Complex operator+(const Complex& a, const Complex& b); 
 {
	 return Complex(a.real + b.real, a.imag + b.imag);
 }
 
 bool operator==(const Complex& a, const Complex& b);
 {
	 return a.real == b.real && a.imag == b.imag);
 }

 void ComplexView(const Complex& cComplex)
 {
	 cout << "��� : " << Complex.real << " +" << Complex.imag << "i" << endl;
 }

 void ComplexEqual(const Complex& c1, const Complex& C2)
 {
	 if (c1 == c2)
	 {
		 cout << "equal" << endl;
	 }

	 else
	 {
		 cout << "not equal" << endl;
	 }
 }
int main()
{
	A a(10);
	B b;
	b.View(a);
	//�ܺο��� ���ϰ� ��� ����
	F_Function(a);
	Complex c1(1.0, 2.0);
	Complex c2(2.0, 4.0);
	Complex c3 = c1 + c2;
	ComplexEqual(c1, c2);

	return 0;
}