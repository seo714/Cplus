#include <iostream>
using namespace std;
//1. private, public, protected 상속

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

// 상속
// class 클래스명 : 접근제한자 기존클래스명
//{
//
//}

//접근제한자에 따른 상속 권한
// 상속으로 설정한 접근 제한자보다 접근 범위가 큰 멤버는 해당 접근 제한자로 맞춰지게 됨
// 접근 범위는 public > protected > private 순
//					  public 상속		 protected 상속	     	private 상속
// public	   멤버		   public			   protected              private
// protected   멤버       protected           protected             private
// private     멤버       접근 불가             접근 불가             접근 불가


// 2. 다행성(polymorphism)
//  하나의 객체로 어려 형태를 표현하는 설계 방법
// 상속으로 구성된 클래스 중 상위 클래스는 하위 클래스의 형태로 생성이 가능
//  ex) Animal* animal = new Lion();
//      Animal* animal = new Penguin(); (( 사자와 동물, 펭귄과 동물의 위치 (순서) 조심))
// 
// 1. 상위 클래스(기본 클래스)를 설계
class Animal
{
public:
	void info()
	{
		cout << "동물의 소개를 진행할 부분" << endl;
	}
	//2. vitrual 함수에 대한 생성을 진행
	//vitrual(가상) 함수란 vitrual 키워드가 붙은 함수를 의미
	// 가상 함수는 상속받는 클래스에서 재정의 할 것으로 예상되는 함수를 의미
	// 하위 클래스(자식 클래스)쪽에서 cry()를 재정의하면, Animal의 cry가 아닌 새로 만든 클래스의 cry() 가 작동

	virtual void cry()
	{
		cout << "동물의 울음소리를 작성할 부분" << endl;
	}
};

//3. 하위 클래스 설계
class Lion :public Animal 
{
	void inof()
	{
		cout << "사자임ㅋ" << endl;
	}
	//재정의를 할 경우에는 vitrual을 따로 쓰지 않음
	void cry()
	{
		cout << "으ㅜ아아" << endl;
	}
};
int main()
{
	A a;
	B b;
	C c;
	D d;

	// 4. 동물 클래스 생성
	Animal* animal = new Animal();
	animal->cry();
	animal->info();


	// 표현하고 싶은 다른 형태로 생성
	animal = new Lion();
	animal->cry();
	animal->info();

	// 일반적인 경우로 만드는 경우(동적 할당이 아닌 경우)
	// Lion에 대한 객체도 만들어줘야하기 때문에 보통은 바로바로 만들어 쓸 수 있는 동적 할당을 더 많이 사용함
	Animal animal2;
	Lion lion;
	animal2.cry();
	animal2.info();

	animal2 = lion;
	animal2.cry();
	animal2.info();

	//코드 실행 결과
	// 1. animal의 cry , info 출력
	// 2. animal을 lion으로 새롭게 생성 후, 실행 시 cry 는 변경되고 info는 그대로
	// 3. animal2의 cry, info 정상적으로 출력
	// 4. animal2를 lion 형태로 바구고 실행해도 변화 없음
	
	//클래스 타입으로 만들어진 객체(데이터)는 일반적으로 만들었을 경우
	// 호출할 함수의 위치의 설정까지 결정되고 고정됨
	// 변경을 해도 기존의 설정을 그대로 따라감(정적 바인딩)

	// 따라서 vitrual 키워드를 통해 현재 객체가 가리키고 있는 위치를 선택할 수 있게 설정해줌(동적 바인딩)
	
	// 다형성 사용의 목적
	// 1. 같은 코드에서 여러 다른 실행 결과가 나와야하는 경우
	// 2. 공통적인 부분에 대한 제공
	// 3. 재정의를 통한 설계 방식으로 확장성 있는 코드 설계에 효율적
	

}