#include <iostream>
using namespace std;

//클래스 상속
// 클래스와 클래스를 연결하는 행위
// 객체 간에 계층적인 관계를 표현하고 싶은 경우 사용하는 설계 방법
// 
// ex) Person(상위 클래스는 가장 공통적인 부분만 가짐)
//			 -Employee
//					  -Supervisor(하위 클래스로 갈수록 더 많은 작업 진행 ㄱㄴ
//     Fruit
//			 -Apple
// 

//클래스 상속 만드는 방법
//class  클래스명 : 접근제한자 클래스명
//{
//
//};

//접근 제한자의 종류
// private : 외부 접근 금지(내부 데이터)
// public : 전체 공유(외부에서 사용할 기능)
// protectd : 상속 관계까지의 연결(관계성 데이터)


class Item 
{
private:
	int code;
public:
	string name;
	string discription;
};

class Potion : public Item
{
public:
	int count;
	Potion(string name, string description, int count)
	{
		//this는 클래스 내부의 데이터를 확인하는 용도(자기자신)
		// 상속을 통해 클래스를 설계하면, 기존의 클래스(부모 클래스)가 가지고 있는 값을 가짐
		// 단, 상속의 경우 privat에 대한 접근은 불가
		this->name = name;
		this->discription = discription;
		this->count = count;
	}
	void Use()
	{
		count--;
		cout <<name<< "포션을 사용했습니다." << endl;

		if (count < 0)
		{
			delete this;
		}
	}
};

//상속의 장점
// 1. 코드의 재사용이 가능(기존의 크래스의 정보를 그대로 가져와서 사용하기 때문에 
//    비슷한 기능을 가진 새로운 클래스를 만들 때 불필요한 중복 안 할 수 ㅇㅇ
//
// 2. 특정 서비스(API) 구현에 있어서 통일된 형태의 틀로써 제공할 수 있음
//    이는 개발자들마다 각자의 스타일로 개발해 개발 혼선을 주는 문제를 해결 할 수 ㅇㅇ
//    이는 Java나 C#의 Interface 개념과 유사
//
// 인터페이스(Interface) : 공통적으로 사용되는 기능들에 대한 틀 제공(기능 구현 X)
//						  이름을 전달 받은 쪽에서 자체적으로 개발하도록 통일된 양식으로, 유지 보수에 효과적일 수 ㅇㅇ
//
//3. 코드 구현 시의 구현 오류를 줄일 수 ㅇㅇ
// (해당 기능을 상속받지 않으면 에러가 발생하도록 설계하는 방식 --> 순수 가상함수)

// 단점
// 1. 결합도가 너무 상승(하나를 수정하면 관련 코드 모두 영향)
// 2. 불필요한 기능에 대한 상속이 발생할 수 ㅇㅇ
// 3. 상속은 두개의 클래스를 연결하는 기능으로, 다양하게 연결되야하는 데이터 표현에는 한계적임
//4. 다이아몬드 상속 문제
//		A, B, C, D 클래스
//		이때 A는 B와 C를 상속받음
//		D를 통해 B와 C를 만듦
// 이런 경우 B와 C는 각각 D의 기능을 물려받은 상태이고, 
// 그 기능을 A에게 전달한 경우 A는 B와 C의 기능 중 어떤 값에 접근해야하는가?라는 문제 발생(모호성)


// ★C++의 클래스 간의 관계★
// 1/ is A 관계
// : ~는 ~이다로 해석되는 경우
// 일반적으로 클래스 상속을 통해 구현
// ex) Pianist is a Musician 
//     Singer is a Musitian
//     
// class Musician
// class Pianist : public Musician
// class Singer : public Musician


// 2. has A 관계
// : 는 ~를 가지고 있다고 해석되는 경우
// ex) 태래는 기타를 가지고 있다. 
// 
// 태래가 기타를 가지고 있지 않아도 문제가 발생하지 않음(이 관계는)
// 즉 태래 calss와 기타 class가 생성되는 시기나 소멸되는 시기가 같을 필요 없음
// 
// 상속이 아닌 클래스 내부에 클래스를 가지고 있는 형태로 설계
// class  taerae
//{
//	public:
//		guitar a;
//}

//3. 컴포지션(Composition) : 구성
// : 논리적인 관계를 형성하는 경우
// ex) 켬퓨터는 CPU를 가지고 있다.
//
// 소유하고 있는 개체의 생성과 소멸이 서로 종속적인 경우

//4. 연관관계(Association)
// 수평적인 관계에 대한 표현
// ex) 의사와 약사
// 환자의 경우 의사를 만나면 약사르 만나게 된다. (Y/N)
// 환자의 경우 약사를 만나면 의사를 만나게 된다. (Y/N)
//
// 이 경우라면 의사와 약사가 공통적으로 할 수 있는 행위를 대상으로 기능을 구현
//ex) class Druggist {}
//	  class Doctor
//    {
//       // 치료를 하고 결과를 기반으로 약사에게 약 처방을 요청하는 코드
//		 void Treatiment(Druggist* druggist) {}
//    }
//	  class Doctor {}
//	  class Druggist
//	  {
//	    //의사에게 받은 정보를 기반으로 약을 조재하는 코드
//	    void Hasty(Doctor* doctor){}
//	  };


//5. 의존 관계(dependency)
// 전달된 것을 통해 호출
// ex)공장에서 자동차를 생성
// 
// 
// ex) class Die { public void motion() {}}
// class Plyer
// {
// public:
//		void OnDead(Die die) { die.motion() }
//}

int main()
{
	Potion p("파랑", "파란색 포션이다",1);
	p.Use();

	return 0;
}