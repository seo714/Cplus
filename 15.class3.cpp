#include <iostream> // 실행 안됨
using namespace std;

// 생성자, 소멸자 사용

class 클래스명
{
	//생성자(constructor)
	// 클래스의 이름과 동일하고, 따로 타입이 없는 메소드(함수)
	//특징)
	//    클래스를 통한 객체가 생성되었을 때, 자동적으로 호출
	//    따로 만들지 않을 경우 자동으로 클래스명();의 형태가 됨
	클래스명()
	{
		// 생성 시 실행할 명령문을 작성하는 위치
		// 생성 시 클래스 내부의 데이터에 대한 초기화를 주로 진행

	}
	// 소멸자(Destructor)
	// 클래스의 이름과 동일하고, 따로 타입이 없으며 앞에 ~가 붙는 메소드
	// 특징)
	//	   클래스를 통한 객체가 메모리 상에서 제거되었을 때, 자동으로 호출됨
	//     한 클래스당 소멸자는 한 개만 존재 가능
	~클래스명()
	{
		// 소밀 시 실행할 명령문을 작성하는 위치
		// 주로 동적 할당에서 메모리에 대한 해제를 진행하는 경우에 사용됨
	}
};

class P
{
private:
	string name;
	int hp;
public:
	//1. 생성자 오버로딩(Overloading)
	// 생성자는 여러 개를 만들 수 있음 단,
	// 조건 ) 생성자의 매개변수의 개수, 순서가 다른 경우
	P()
	{
		name = "MISSINGNO";
		hp = 0;
	}
	// [생성자 수정]0
	// 생성자 선언부에 매게변수를 작성할 경우, 생성 시 해당 값에 대한 정보를 넣어줘야함

	// 클래스명(매개변수) : 변수명(매개변수명)
	// 자동적으로 전달받은 값이 클래스 내부의 변수로 초기화(Initializer)
	P(string name, int hp) : name(name), hp(hp)
	{
		cout << name << "이(가) 등장했습니다" << endl;
	}
	~P()
	{
		cout << name << "이(가) 쓰러졌습니다" << endl;
	}
	void show()
	{
		cout << "이름 : " << name << " 체력 :" << hp << endl;
	}
	void skill(string Skill_name, int value, P* other)
	{
		cout << name << "의" << Skill_name << endl;
		other->hp -= value;
		if (other->hp <= 0)
		{
			delete other;
		}
	}
};


int maiin()
{
	//new를 통한 클래스 할당 코드
	// 클래스명* 객채명 = new 생성자명(인자 값);

	P* p1 = new P("멯래",50);
	P* p2 = new P("멯숭이", 50);
	P p3;


	p1->show();
	p2->show();

	p1->skill("tae", 40, p2);
	p2->skill("rae", 60, p1);


	
	return 0;
}