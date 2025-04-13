#include <iostream>
using namespace std;

// friend 기능 사용
// 클래스의 멤버 함수가 아니나, 해당 클래스의 private 값에 접근할 수 있게 함
// 
//friend 처리된 함수는 private을 사용할 수 있는 멤버 함수와 동등한 권한을 가짐
//
//유의사항
// 해당 기능은 비공개에 대한 접근 허용 문법이므로, 남용하지 않는 것을 전제로 함
// 꼭 필요한 경우에만 사용


//1. friend 클래스 등록
// 클래스를 다른 클래스의 friend로써 등록
// 이렇게 하면 다른 클래스의  private 멤버에 접근 가능
class A
{
private:
	int secret_value;
public:
	A(int s) :secret_value(s) {}
	friend class B;

	//2. friend 함수
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

//3. freind를 이용한 연산자 오버로딩
class Complex //복소수 클래스 : 흔히 a + bi 라고 부르는 형태로 a는 실수(real), b는 허수(imaginary)를 의미
	          // 실수 : 일반적인 실제 숫자 , 허수 : 기호 i가 붙은 가상의 숫자 
	          // 수학에서 실수에 대한 부호 표현을 위해 사용
{
public:
	double real;
	double imag;
	Complex(double r = 0.0, double i = 0.0) :real(r), imag(i) {}

	//// 멤버 함수로써의 오버로딩이라면?
	//Complex operator+(const Complex& other);
	//{
	//	return Complex(real + other.real, imag + other.imag);
	//}
	//
	// bool operator==(const Complex& other) const
	//{
	// return real == other.real && imag == other.imag;
	// }


	//friend를 이용한 오버로딩이라면?
	// >>클래스 내부에서 선언하고 외부에서 구현
	//외부에서 진행할 보소수 + 복소수
	friend Complex operator+(const Complex& a, const Complex& b); //(( 밖에서 사용할거라 변수 두 개 필요 ( a + b )))
	//외부에서 진행할 복소수에 대한 비교 (==)
	friend bool operator==(const Complex& a, const Complex& b);
};

// 재구현할 때는 friend를 적지 않음
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
	 cout << "결과 : " << Complex.real << " +" << Complex.imag << "i" << endl;
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
	//외부에서 편하게 사용 가능
	F_Function(a);
	Complex c1(1.0, 2.0);
	Complex c2(2.0, 4.0);
	Complex c3 = c1 + c2;
	ComplexEqual(c1, c2);

	return 0;
}