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

int main()
{
	return 0;
}