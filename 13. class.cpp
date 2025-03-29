#include <iostream>
using namespace std;
//C++ 클래스
// 클래스 : 데이터와 함수를 하나로 묶은 사용자 정의 데이터 타입((구조체와 비슷))
// 클래스는 프로그램 내의 '객체'를 만들기 위한 설계도 역할

// ex) ATM에 대한 클래스 설계
// ATM에 필요한 핵심 데이터 나열
// 1. 사용자(ATM 사용)
// 2. ATM 기기(담당 관리자, 위치)
// 3. 은행(ATM과 연결될 회사) (은행 주소)
// 4. 은행 계좌(사용자가 은행에 만든) (잔액, 기능(예금, 출금, 입금))
// 5. 예금

// 클래스 설계의 기본 법칙
// private를 통해, 직접적으로 접근하면 안되는 정보를 설계
// public을 통해 외부에 기능을 전달



// 좌석 클래스 만들기
class Seat
{
private: //private에 적혀있는 변수 또는 함수는 공개되지 않음 -> 외부에서 접근 불가
	string name;
public: // public에 적혀있는 변수 또는 함수는 공개됨 -> 외부 사용 ㄱㄴ
	// 생성자는 클래스와 이름이 동일한 함수 의미
	// 클래스 형태의 객체(데이터)가 생성되었을 때, 호출
	Seat()
	{
		name = "{---}";
	}
	void reset()
	{
		name = "{---}";
	}
	void setName(string name)
	{
		this->name = name; // this->name은 현재 클래스 Seat 자신이 가지고 있는 name임을 표현 ((변수명이 같아 헷갈리지 않으려고? 이름겹쳐서))
	}
	string getName()
	{
		return name;
	}
};


int main()
{
	Seat* seats = new Seat[5];
	cout << "김태래님 2번째 자리 예약" << endl;
	seats[1].setName("김태래");

	for ( int i = 0; i < 5; i++)
	{
		cout << seats[i].getName() << " ";
	}
	return 0;
}