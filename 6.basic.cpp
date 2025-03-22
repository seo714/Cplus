//#include <iostream>
//using namespace std;
//#pragma region 필기
////Ctrl Shift / : 주석 생성 및 제거
////Alt shift enter : 전체 화면
////
////
////
////전처리기 작성 영역(ex. #include <iostream>)
////함수 정의 영역
////
////메인 함수 정의 영역(main)
////
////정의된 함수 작성 영역
//#pragma endregion
//
//int main()
//{
//	// 1. if문 : 특정 조건에 맞게 명령문을 실행하는 방법
//	// 조건을 세우기 위해선 데이터가 필요(초기식)
//	
//	// 다음 if문 구현
//	// 물이 500ml초과라면 "실패"
//
//	// 조건 : 물이 500ml 초과
//	// 물은 명칭, 500(ml)가 값, 기준은 초과
//	int water = 503;
//	if (water > 500)
//	{
//		cout << "실패" << endl;
//	}
//
//	//2. if else 문 : 특정 조건에 맞는 경우와 아닌 경우를 둘 다 설계
//	//                Yes of No처럼 답이 확실한 경우 설계하는 방식
//	//유의사항 : else는 if문의 보조 문법으로 단독으로는 사용 불가(if 문이 존재해야 가능)
//	
//	bool cointoss = true;
//	// bool은 true(진실), false(거짓)을 포함하는 C++의 데이터
//	// 이 예제에서는 true를 앞(head), false를 뒤(tail)
//
//	if (cointoss == true)
//	{
//		cout << "앞" << endl;
//	}
//	else
//		cout << "뒤" << endl;
//	
//	// if만 3번 적는 것과의 차이점
//	// else if는 다른 조건이 만족하고 있다면, 실행 ㄴㄴ
//	// if문은 조건의 판단을 위해 무조건 실행
//	
//	// 아래 코드를 if로 짜면 if 3번을 전무 확정적으로 처리해야함
//	// else if 와 섞으면, 조건이 맞으면 나머지 조건은 실행 안함
//
//
//	// if-else if 문 : 선택지가 2개 이상인 경우, 그 조건들 외에에는 따로 실행하고 싶지 않은 경우
//	// 1번을 고르면 100p, 2번 300p, 3번 500p 사다리 게임
//
//	int choice=3;
//	
//	if (choice == 1)
//	{
//		cout << "100포인트" << endl;
//	}
//	else if (choice == 2)
//	{
//		cout << "300포인트" << endl;
//	}
//	else if (choice == 3)
//		cout << "500포인트" << endl;
//
//
//	return 0;
//}