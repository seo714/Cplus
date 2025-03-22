//#include <iostream>
////1. namespace
////   C++에서는 프로그램을 만들다 보면, 여러 파일이 생성될 수 있고 
////   이로 인해 함수, 구조체 등에서 이름이 겹치는 상황이 발생 ㄱㄴ
////   함수, 구조체, 변수 등 이름이 같을 경우 오류 발생(이름 충돌 이슈)
////   이런 충돌 방지를 위해 특정 위치의 함수, 구조체, 변수임을 안내하는 이름 영역(namespace)가 제공됨
//
////   C++의 네임스페이스 std는 C++의 표준 라이브러리의 모든 기능에 대한 네임스페이스 
//
//
////2. Object(객체) ((class로 만들어진 결과물))
////   프로그램에서 데이터와 이를 처리하는 기능(함수)로 구성되어 있는 하나의 고유한 값
////   ex) 세탁기는 다양한 버튼과 세탁 기능으로 구성되어 있음
//
//
//
//int main()
//{
//	// std 네임스페이스에 있는(::) cout 객체(object)
//	// cout 객체가 가지는 기능
//	// cout은 C++에서 콘솔 화면에서의 출력 기능을 제공
//	// << 는 cout객체에 값을 전달하는 역할을 가진 연산자(출력 연산자)
//	std::cout << "enter your first name : "; // ((printf대신 사용하는 것))
//	
//	//std 네임스페이스에 있는 string 클래스
//	// C언어에서 문자열을 표현할 때 char의 배열로 표현해서 불편한 부분을 수정해
//	// 일반적인 자료형처럼 사용할 수 있게 만들어준 데이터
//	std::string name;
//	std::cin >> name;
//	std::cout << "first name : " << name << std::endl;
//	//std::endl은 cout 출력은 C언어의 \n처럼 enter 기능
//	//단, endl은 출력 버퍼(임시 저장소)를 비우는 작업이 포함
//	//이 기능은 \n보다 작업 속도가 느리기 때문에 안정성 문제가 아니라면 \n 사용을 권장
//
//	// 버퍼(buffer)
//	//임시 메모리 공간을 의미하며, 입출력 과정에서 바로바로 전달하는 것이 아닌 임시로 보관했다가 내보내는 방식을 의미
//
//	// 버퍼 장점
//	//1. 문자 잘못 입력 시 수정 ㄱㄴ
//	//2. 호출을 줄여서 자원 소모를 아낄 수 ㅇㅇ
//	
//	// 버퍼 단점
//	//버퍼 또한 데이터 공간이기 때문에, 추가적인 비용을 지불해야 함
//
//	//컴파일러(compile)
//	//특정 프로그래밍 언어로 쓰여있는 문서를 다른 프로그래밍 언어로 옮기는 언어 번역 프로그램
//	// 언어 번역 프로그램
//
//
//	//C언어의 printf, scanf와의 차이점
//	//1. C++의 cout 객체는 출력하는 값에 대한 조사를 컴파일러가 진행할 수 ㅇㅇ 
//	//2. cout에서는 컴파일러가 알아서 자료형을 판단해서 호출 ((예를 들어 숫자 자리에 문자를 넣으면 자동을 0 출력되어 오류가 안난다))
//	//3. 처리 속도는 printf, scanf가 빠름 (이유 : cout은 C++의 표준 값과 동기화가 되어있어 그들을 거쳐서 사용해야 함(((기능이 많으니까 느림)))
//
//
//	return 0;
//}