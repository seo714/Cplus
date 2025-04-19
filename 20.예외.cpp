#include <iostream>
#include <vector>
using namespace std;

//에러(Error)
// 개발자가 미리 예측할 수 없고, 방지할 수 없음
// 시스템을 종료해야할 수준으로 수습불가
//ex) 컴파일 에러(번역 과정에서 발생하는 오류)
//    문법적 오류
// try문 : 예외 처리를 할 때 사용하는 문법

//try
//{
//	예외 상황이 발생할 수 있는 코드;
//}
//catch)(에외로 잡은 데이터 변수명)
//{
//	예외 발생 후 실행할 코드;
//}



int naim()
{
	vector<int> vec(3); // 크기가 3개인 벡터
	//예외 상황(except)
	//사용자가 수정할 수 있는 정도의 상황
	// 프로그램을 실행하면서 발생한느 상황
	// ex) 10 / 0 같은 경우 분모는 0 불가

	try
	{
		cout << vec.at(4);
		//백터명.at(번호)는 벡터의 해당 번호 순서에 있는 데이터를  return 함
		// cout << vec[4]; 이거랑 같은 의미
	}

	catch(out_of_range& e)
	//out_of_range는 vector 등의 자료구조에서 범위 이탈에 대한 데이터
	{
		cout << "예외 상황 발생" << endl;
	}

	//예외 문제 해결 방법
	// 1. 코드 재수정
	//    잘못된 부분에 대한 재작성을 통해 예외 상황을 해결
	//
	// 2. 제어문을 통한 수정
	//    해당 상황이 발생하지 않도록 제어문을 설계해 코드를 수정
	//
	// 3. 예외 처리
	//    그 상황이 발생하는 건 필연적이기 때문에, 그 상황이 발생 시
	//    실행 시킬 코드를 작성하는 방법
	//
	//C++에서는 try, catch, throw를 통해 구현


	return 0;
}