#include <iostream>	
using namespace std;
//유형별 연산자 오버로딩에 대한 연습

//1. 단항 연산자 ++, --

class Dot
{
private:
	int x;
	int y;
public:
	//매개변수가 x=0 처럼 값이 설정되어있는 경우를 디폴트 매개변수라고 부르며
	// x와 y에 값을 넣지 않았을 경우에 대한 기본 값 설정 용도
	// ex) Dot d(1,5) --> [1, 5]
	// ex) Dot d(1) --> [1]
	// ex) Dot d --> [0,0]
	Dot(int x = 0, int y = 0) : x(x), y(y) {}
	

	void info()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	// 전위 ++ 연산
	// ++a
	// a에 대한 +1을 먼저 진행 후 남은 연산 처리
	//a=7 이라면 ++a - 3 : a=8,  결과 =5
	Dot &operator++(void) //((따로 전달할 값이 없다))
	{
		x++;
		y++;
		return (*this);
	}
	// 후위++ 연산
	// a++
	// a에 대한 -1을 먼저 진행 후 남은 연산 처리
	//a=7 이라면 a++ - 3 : a=8, 결과 = 4
	const Dot operator++(int)
	{
		// 현재 정보를 기준으로 데이터 생성 (이 값은 변질되지 않음)
		const Dot temp(*this); //((*this는 자기자신을 의미))
		// x,y에 대한 계산 처리
		x++;
		y++;
		// 복제본(연산이 끝났던 데이터)를 return함
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

	//1. 연산자 오버로딩을 통해 대입 연산자에 대한 작업을 진행하는 경우
	// 얕은 복사 : 복사본이 원본과 같은 참조를 공유하는 방식, 즉 같은 값을 가리키는 주소 값을 복사하는 행위
	// 특징 : 인스턴스(클래스를 생성한 결과물)가 메모리에 새로 생성되지 않고, 주소 값만 복사해 같은 위치를 가리키는 것
	Point& operator=(const Point& ref)
	{
		value1 = ref.value1;
		value2 = ref.value2;
		return *this;
	}

};
/*
// 2. 
// 깊은 복사 : 전체에 대한 복사, 객체가 가진 모든 정보에 대한 복사하는 행위
// 특징 : 새롭게 동적할당을 받고, 원본의 데이터로 복사
// 주로 문자열에 대한 작업에서 사용
class Sample
{
private:
	string name;
public:
	Sample(const string& name) :name(name)
	{

	}
	//대입 연산자 오버로딩(깊은 복사)
	Sample& operator=(const Sample& ref)
	{
		//1. 자기 자신에게 대입 처리
		if (this == &ref)
			return *this;

		name = ref.name;
		return *this;
	}
	//C++ 문제에서, 기존의 C언어 형태의 풀이법 (char * )를 쓰는 경우가 자주 보임
	// 하지만 string은 기존의 char* 방식보다 더 간결하고, 자동으로 관리해주며, 안전성이 높은 설계방식으로
	// stirng을 쓰는것을 권장
	//
	//만약 name이 string이 아닌 char이였다면
	//Sample& operator =(const Sample& ref)
	//{
	//	if (this == &ref)
	//		return *this;
	//
	//	// 기존에 있던 자원에 대한 해제
	//	delete[] name;
	//
	//	//문자열에 대한 길이 측정
	//	int length = strlen(ref.name) + 1;
	//	name = new char[length];
	//	//문자열 복사
	//	// strcpy_s(기존값, 길이, 변경값);
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

	Point2 operator-() //a-b가 아닌 그냥 a 자체에 -를 붙이느 행위이기 때문에, 대상이 없는 상태
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
	Point pos2 = pos1; // 복사

	Point pos3(3, 4);
	pos3 = pos1; // 대입

	pos1.Info();
	pos2.Info();
	pos3.Info();


	// 문제 Point2 설계
	Point2 p1(1, 2);
	Point2 p2 = -p1;

	p2.Info(); (-1, -2);

	Point2 p3 = ~p2;
	p3.Info();

	return 0;
}