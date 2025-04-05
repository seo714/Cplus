//#include <iostream>
//using namespace std;
//#pragma region 코드 표기법
////개발자들 간에 사용되는 코드 표기법
////>> 암묵적인 약속
////
////1. 카멜 표기법(Camel Case) : 주로 JS, Python
////>> 변수, 메소드, 클래스, 파일 이름을 작성할 때 사용
////규칙)
////1. 단어의 첫 글자는 소문자
////2. 두번째 단어부터는 첫 글자를 대문자
////3. 단어 사이에 공백, 특수 문자 X, 단어를 연결해서 사용
////ex) myValue, userName
////클래스의 경우 앞글자에 대문자가 붙기 때문에 이렇게 표기되기도 함
////ex) UserDeviceService
////
////
////2. 파스칼 표기법(Pascal Case) : 주로 Java, C#
////규칙)
////1. 모든 단어의 첫 글자는 대문자
////2. 단어 사이에 공백, 특수 문자 X, 단어를 연결해서 사용
////ex) UserDevice, UserProfile
////
////
////3. 스네이크 표기법(Snake Case) : 주로 데이터베이스
////규칙)
////1. 단어와 단어 사이를 밑줄(_)로 구분
////2. 각  단어는 소문자로 작성되고, 밑줄을 통해 연결
////ex) first_name, phone_number
//#pragma endregion
//
//// 클래스 : 정보 은닉
//// 객체의 내부 구현을 외부로부터 숨기는 것(private)
//
//// 캡슐화(Encaspsulation)
//// 객체의 상태와 동작을 하나로 묶어서 그 기능을 통해 상호작용하도록 한다.
////--> 가려줄 정보를 private로 설정, 그 데이터에 대한 설정 또는 접근을 할 수 있는 기능(메소드)을 public으로 제공한다.
//
//// ((데이터를 단순하게 작성하면 코드를 확장했을 때 오류가 발생할 수 ㅇㅇ))
//class Student
//{
//private:
////학번과 학생의 이름은 외부에서 함부로 수정하면 안되는 값
//	int sid;
//	string sname;
//public:
//// set 함수 : void 형태의 함수이면서, 설정하려는 테이터의 형태를 매개변수로 가지고 있음
////			 전달 받은 값으로 객체의 상태를 초기화하는 기능
////			 set + 변수명으로 이름을 만들어주며, 보통 변수의 앞글자를 대문자로 작성
//
//// get 함수 : 데이터의 형태를 반환타입으로 가지는 형태의 함수
////			  매개변수를 따로 가지지 않음
////			  해당 데이터 값을 그대로 return하는 기능
////			  get + 변수명으로 이름을 만들어주며, 보통 변수의 앞글자를 대문자로 작성
//	void setSid(int id)
//	{
//		sid = id;
//	}
//	int getSid()
//	{
//		return sid;
//	}
//	void setSname(string name)
//	{
//		sname = name;
//	}
//	string getSname()
//	{
//		return sname;
//	}
//};
//
////클래스 Point 설계
////1. point 클래스는 좌표를 표현함
////2. 좌표는 x축과 y축
////3. x축과 y축에 대한 set/get 함수
////4. Point 클래스에는 현재의 좌표를 출력하는 함수 show()가 있음
////   좌표의 기준에 따라 몇 사분면인지도 같이 출력함
////5. main  코드에서 객체 p1을 선언
////6. p1의 축을 설정
////7. show()를 통해 해당 좌표 출력
//
//#pragma region 점수
//// 1. x, y와 이에 대한 set/get()선언 -- 1점
////2. show() 구현
////   1) public 영역에 구현 -- 1점
////   2) 좌표에 대한 출력 -- 2점
////   3) 사분면에 대한 추력 -- 3점
////3. main에서 객체 p1 선언 --1점
////4. 실행 시 콘솔 창에 정상적으로 출력 -- 4점
//#pragma endregion
//class Point
//{
//private:
//	int xvalue, yvalue;
//	int i = 0; // i(사분면 표시 역할)를 show()함수 안에 만들어도 ㄱㄴ
//public:
//
//	void setX(int x)
//	{
//		xvalue = x; //X = x;이렇게 해도됨 or this x -> x; 도 ㄱㄴ
//	}
//	int getX()
//	{
//		return xvalue;
//	}
//	void setY(int y)
//	{
//		yvalue = y;
//	}
//	int getY()
//	{
//		return yvalue;
//	}
//	void show()
//	{
//		if (xvalue > 0 && yvalue > 0)
//			i = 1;
//		else if (xvalue < 0 && yvalue > 0)
//			i = 2;
//		else if (xvalue < 0 && yvalue < 0)
//			i = 3;
//		else if (xvalue > 0 && yvalue < 0)
//			i = 4;
//		if (i == 0)
//		{
//			if (xvalue == 0&& yvalue != 0)
//			{
//				cout << "p1은 y축 위의 점" << endl;
//			}
//			else if (xvalue != 0 && yvalue == 0)
//			{
//				cout << "p1은 x축 위의 점" << endl;
//			}
//			else if (xvalue == 0 && yvalue == 0)
//				cout << "p1은 원점";
//		}
//		else
//			cout << "p1 : 제 " << i << "사분면";
//	}
//};
//
//
//int main()
//{
//	////student01 객체 선언
//	//Student student01;
//
//	////student01 객체의 데이터 초기화
//	//student01.setSid(200207141); // 2002년 07년 14년이 생일인 1번째 학생
//	//student01.setSname("김태래"); // 학생 이름
//	//
//	//// stduent01 객체의 정보를 출력
//	//cout << "학번 : " << student01.getSid() << " 이름 : " << student01.getSname() << endl;
//	//
//	//return 0;
//
//	
//	Point p1;
//	p1.setX(10);
//	p1.setY(5);
//	cout << "(" << p1.getX() << "," << p1.getY() << ")" << endl;
//	p1.show();
//	return 0;
//}